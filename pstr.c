#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * pstr - prints the string starting at the top of the stack,
 * followed by a new line.
 * @stack: doubly linked list representation of a stack
 * @line_number: line number of where code is executed
 *
 * Return: Nothing.
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *curr_node = *stack;

	(void)line_number;
	if (*stack == NULL)
	{
		printf("\n");
		return;
	}

	while (curr_node != NULL)
	{
		if (curr_node->n > 0 && curr_node->n <= 127)
		{
			printf("%c", curr_node->n);
		}
		else
		{
			printf("\n");
			return;
		}
		curr_node = curr_node->next;
	}
	printf("\n");
}
