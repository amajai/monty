#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * pint - prints the value at the top of the stack,
 * followed by a new line.
 * @stack: doubly linked list representation of a stack
 * @line_number: line number of where code is executed
 *
 * Return: Nothing.
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		data.val = "err";
		return;
	}
	printf("%i\n", (*stack)->n);
}
