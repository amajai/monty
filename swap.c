#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * swap - swaps the top two elements of the stack.
 * @stack: doubly linked list representation of a stack
 * @line_number: line number of where code is executed
 *
 * Return: Nothing.
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	int tempn;
	int count = 0;

	(void)line_number;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	if (count < 2)
	{
		data = "swap";
		return;
	}
	tempn = (*stack)->next->n;
	(*stack)->next->n = (*stack)->n;
	(*stack)->n = tempn;
}
