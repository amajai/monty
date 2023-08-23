#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * rotr - rotates the stack to the bottom.
 * @stack: doubly linked list representation of a stack
 * @line_number: line number of where code is executed
 *
 * Return: Nothing.
 */
void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *curr_node = *stack;
	int last_n;

	(void)line_number;
	if (*stack == NULL || ((*stack)->prev == NULL && (*stack)->next == NULL))
	{
		return;
	}
	while (curr_node->next != NULL)
	{
		curr_node = curr_node->next;
	}
	last_n = curr_node->n;

	while (curr_node->prev != NULL)
	{
		curr_node->n = curr_node->prev->n;
		curr_node = curr_node->prev;
	}
	curr_node->n = last_n;
}
