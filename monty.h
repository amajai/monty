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
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**
 * struct data_s - data on value and program mode
 * @val: the data value
 * @is_stack: if 1, program use stack
 * if 0, program use queue
 *
 * Description: data value to add to a node and
 * program mode that change between stack and queue
 */
typedef struct data_s
{
	char *val;
	int is_stack;
} data_t;
extern data_t data;
void p_instruction(char *str, int ln, stack_t **stk, FILE *fp);
char *_strdup(const char *str);
void push(stack_t **head, unsigned int line_number);
int check_num(char *s);
void trim(char **str);
void free_dlist(stack_t *head);
void pall(stack_t **stack, unsigned int line_number);
int check_opcode_err(char *s);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void sub(stack_t **stack, unsigned int line_number);
void _div(stack_t **stack, unsigned int line_number);
void mul(stack_t **stack, unsigned int line_number);
void _mod(stack_t **stack, unsigned int line_number);
void free_all_exit(char *str, stack_t **stk, FILE *fp);
int checkspace(char *input);
void pchar(stack_t **stack, unsigned int line_number);
void pstr(stack_t **stack, unsigned int line_number);
void rotl(stack_t **stack, unsigned int line_number);
void rotr(stack_t **stack, unsigned int line_number);
void stack(stack_t **stack, unsigned int line_number);
void queue(stack_t **stack, unsigned int line_number);
#endif
