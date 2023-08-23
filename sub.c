#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * sub - subtracts the top element of the stack from
 * the second top element of the stack.
 * @stack: doubly linked list representation of a stack
 * @line_number: line number of where code is executed
 *
 * Return: Nothing.
 */
void sub(stack_t **stack, unsigned int line_number)
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
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		data = "err";
		return;
	}
	prev_node = *stack;
	num = prev_node->n;
	*stack = (*stack)->next;
	(*stack)->n -= num;
	(*stack)->prev = NULL;
	free(prev_node);
}
