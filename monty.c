#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

void v(void);
data_t data;

/**
 * main - Main monty program.
 * @ac: Number of arguments
 * @av: List of arguments
 *
 * Return: 0 if success.
 * 1 if error
 */
int main(int ac, char **av)
{
	FILE *fp;
	char buf[256];
	stack_t *stack = NULL;
	int ln = 1;

	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}
	fp = fopen(av[1], "r");
	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", av[1]);
		return (EXIT_FAILURE);
	}
	data.is_stack = 1;
	while (fgets(buf, sizeof(buf), fp) != NULL)
	{
		if (buf[strlen(buf) - 1] == '\n')
			buf[strlen(buf) - 1] = '\0';
		if (checkspace(buf) != 0)
			p_instruction(buf, ln, &stack, fp);
		ln += 1;
	}
	free_dlist(stack);
	fclose(fp);
	return (0);
}
