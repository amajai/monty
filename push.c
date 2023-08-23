#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * push - pushes an element to the stack..
 * @stack: doubly linked list representation of a stack
 * @line_number: line number of where code is executed
 *
 * Return: Nothing.
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;
	stack_t *curr_node = *stack;

	if (data == NULL || check_num(data) != 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		data = "push";
		return;
	}
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n", line_number);
		data = "malloc";
		return;
	}
	new->next = NULL;
	new->prev = NULL;
	new->n = atoi(data);

	if (curr_node == NULL)
	{
		*stack = new;
		return;
	}

	while (curr_node->prev != NULL)
	{
		curr_node = curr_node->prev;
	}
	curr_node->prev = new;
	new->next = curr_node;
	*stack = new;
}
