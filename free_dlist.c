#include <stdlib.h>
#include "monty.h"

/**
 * free_dlist - frees a stack (or queue)
 * @head: pointer to stack (or queue)
 *
 * Return: updated stack (or queue)
 */
void free_dlist(stack_t *head)
{
	stack_t *curr_node = head;
	stack_t *prev_node = NULL;

	while (curr_node != NULL)
	{
		prev_node = curr_node;
		curr_node = curr_node->next;
		free(prev_node);
	}
}
