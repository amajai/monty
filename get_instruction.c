#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "monty.h"

/**
 * p_instruction - process instruction.
 * @str: string instruction
 * @ln: Line number from where code is executed
 * @stk: doubly linked list representation of a stack (or queue)
 * @fp: file descriptor
 *
 * Return: Nothing.
 */
void p_instruction(char *str, int ln, stack_t **stk, FILE *fp)
{
	char *opcode, *instruction = _strdup(str);
	int i = 0;
	instruction_t instructions[] = {
		{"push", push}, {"pall", pall}, {"pint", pint}, {"pop", pop}, {"swap", swap},
		{"add", add}, {"nop", nop}, {"sub", sub}, {"div", _div}, {"mul", mul},
		{"mod", _mod}, {NULL, NULL}
	};
	trim(&instruction);
	opcode = strtok(instruction, " ");
	if (opcode != NULL)
	{
		while (instructions[i].opcode != NULL)
		{
			if (strcmp(opcode, instructions[i].opcode) == 0)
			{
				data = strtok(NULL, " ");
				instructions[i].f(stk, ln);
				if (data != NULL && check_opcode_err(data) == 0)
				{
					free(instruction);
					free_dlist(*stk);
					fclose(fp);
					exit(EXIT_FAILURE);
				}
				free(instruction);
				return;
			}
			i++;
		}
		fprintf(stderr, "L%d: unknown instruction %s\n", ln, opcode);
		free(instruction);
		free_dlist(*stk);
		fclose(fp);
		exit(EXIT_FAILURE);
	}
}
