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

	if (data.val == NULL || check_num(data.val) != 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		data.val = "err";
		return;
	}
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		data.val = "malloc";
		return;
	}
	new->next = NULL;
	new->prev = NULL;
	new->n = atoi(data.val);

	if (curr_node == NULL)
	{
		*stack = new;
		return;
	}
	if (data.is_stack)
	{
		curr_node->prev = new;
		new->next = curr_node;
		*stack = new;
	}
	else
	{
		while (curr_node->next != NULL)
		{
			curr_node = curr_node->next;
		}
		curr_node->next = new;
		new->prev = curr_node;
	}
}
