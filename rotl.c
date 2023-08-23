#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * rotl - rotates the stack to the top.
 * @stack: doubly linked list representation of a stack
 * @line_number: line number of where code is executed
 *
 * Return: Nothing.
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *curr_node = *stack;
	int first_n;

	(void)line_number;
	if (*stack == NULL || ((*stack)->prev == NULL && (*stack)->next == NULL))
	{
		return;
	}
	first_n = (*stack)->n;
	while (curr_node->next != NULL)
	{
		curr_node->n = curr_node->next->n;
		curr_node = curr_node->next;
	}
	curr_node->n = first_n;
}
