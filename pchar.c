#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * pchar - prints the char at the top of the stack, followed by a new line.
 * @stack: doubly linked list representation of a stack
 * @line_number: line number of where code is executed
 *
 * Return: Nothing.
 */
void pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *curr_node = *stack;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		data.val = "err";
		return;
	}

	if (curr_node->n >= 0 && curr_node->n <= 127)
	{
		printf("%c\n", curr_node->n);
	}
	else
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		data.val = "err";
		return;
	}
}
