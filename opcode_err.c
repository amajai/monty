#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * check_opcode_err - check if the string is an opcode error.
 * @s: the opcode
 *
 * Return: 0 if its an error.
 * 1 if its not an error.
 */
int check_opcode_err(char *s)
{
	int i;
	char *errs[] = {
		"push",
		"pint",
		"pop",
		"swap",
		"add",
		"sub",
		"malloc"
	};
	for (i = 0; i < (int)(sizeof(errs) / sizeof(errs[i])); i++)
	{
		if (strcmp(s, errs[i]) == 0)
			return (0);
	}
	return (1);
}
