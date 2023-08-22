#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * pall - prints all the values on the stack, starting
 * from the top of the stack.
 * @stack: doubly linked list representation of a stack
 * @line_number: line number of where code is executed
 *
 * Return: Nothing.
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *curr_node = *stack;

	if (*stack == NULL)
		return;

	while (curr_node != NULL)
	{
		printf("%i\n", curr_node->n);
		curr_node = curr_node->next;
	}
}
