#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * _div - divides the second top element of the stack by the top
 * element of the stack.
 * @stack: doubly linked list representation of a stack
 * @line_number: line number of where code is executed
 *
 * Return: Nothing.
 */
void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	stack_t *prev_node;
	int num;
	int count = 0;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	if (count < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		data.val = "err";
		return;
	}
	prev_node = *stack;
	num = prev_node->n;
	if (num == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		data.val = "divzero";
		return;
	}
	*stack = (*stack)->next;
	(*stack)->n = (*stack)->n / num;
	(*stack)->prev = NULL;
	free(prev_node);
}
