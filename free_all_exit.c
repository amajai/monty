#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * free_all_exit - free all allocated spaces and exit with failure status.
 * @str: string instruction
 * @stk: doubly linked list representation of a stack (or queue)
 * @fp: file descriptor
 *
 * Return: Nothing.
 */
void free_all_exit(char *str, stack_t **stk, FILE *fp)
{
	free(str);
	free_dlist(*stk);
	fclose(fp);
	exit(EXIT_FAILURE);
}
