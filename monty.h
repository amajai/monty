#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
extern char *data;
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
void p_instruction(char *str, int ln, stack_t **stk, FILE *fp);
char *_strdup(const char *str);
void push(stack_t **head, unsigned int line_number);
int check_num(char *s);
void trim(char **str);
void free_dlist(stack_t *head);
void pall(stack_t **stack, unsigned int line_number);
int check_opcode_err(char *s);
void print_opcode_err(char *opcode, int line_num);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
#endif
