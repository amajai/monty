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
		"put"
	};

	for (i = 0; i < sizeof(errs) / sizeof(errs[i]); i++)
	{
		if (strcmp(s, errs[i]) == 0)
			return (0);
	}
	return (1);
}

/**
 * print_opcode_err - print error for opcode provided
 * @opcode: the opcode
 * @line_num: Line number from where code is executed
 *
 * Return: Nothing.
 */
void print_opcode_err(char *opcode, int line_num)
{
	if (strcmp(opcode, "push") == 0)
		fprintf(stderr, "L%d: usage: push integer\n", line_num);
}
