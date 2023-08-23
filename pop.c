#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * pop - removes the top element of the stack.
 * @stack: doubly linked list representation of a stack
 * @line_number: line number of where code is executed
 *
 * Return: Nothing.
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;
	stack_t *prev_head = *stack;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		data = "pop";
		return;
	}
	if (head->next != NULL)
	{
		prev_head = head;
		head = head->next;
		head->prev = NULL;
		*stack = head;
	}
	else
	{
		prev_head = head;
		head = head->next;
		*stack = head;
	}
	free(prev_head);
}
