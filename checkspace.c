#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "monty.h"

/**
 * checkspace - checks if the input passed into is fully
 * a white-space string.
 * @input: cmd input to check.
 *
 * Return: 0 if it fully a white-space string.
 * 1 if it is not.
 */
int checkspace(char *input)
{
	size_t i;

	for (i = 0; i < strlen(input); i++)
	{
		if (input[i] != ' ' && input[i] != '\n' && input[i] != '\t')
		{
			return (1);
		}
	}
	return (0);
}
