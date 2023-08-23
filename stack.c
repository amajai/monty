#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * stack - sets the format of the data to a stack (LIFO).
 * This is the default behavior of the program.
 * @stack: doubly linked list representation of a stack
 * @line_number: line number of where code is executed
 *
 * Return: Nothing.
 */
void stack(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
	data.is_stack = 1;
}
