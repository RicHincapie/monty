#ifndef MONTY_H
#define MONTY_H

/* LIBRARIES INCLUDED */

#include <stdio.h>
#include <sys/types.h>
#include <stdlib.h>
#include <string.h>


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
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
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**
 * struct global_awesome - contains variables to be used as global
 * @ar: the argument of the opcode
 * @line: buffer in which saved each line of the open file
 * @fp: file descriptor
 * Description: helps to use variables through different files
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct global_awesome
{
	char *ar;
	char *line;
	FILE *fp;
} global_awesome;

/* EXTERNAL VARIABLES */
/* char *argument; */
global_awesome *s;

/* FUNCTION PROTOTYPES */
int main(int argc, char *argv[]);
stack_t *search_exec(stack_t **top, char *op_code, unsigned int line_number);
void exec_push(stack_t **top, unsigned int line_number);
void exec_pall(stack_t **top, unsigned int line_number);
int argument_checker(unsigned int line_number, stack_t **top);
void errorhandling(int flag, unsigned int line_number, stack_t **top);
void freedom(stack_t **top, int flag);
void exec_pint(stack_t **top, unsigned int line_number);
void exec_pop(stack_t **top, unsigned int line_number);
void exec_swap(stack_t **top, unsigned int line_number);
void exec_add(stack_t **top, unsigned int line_number);
void exec_nop(stack_t **top, unsigned int line_number);
void exec_sub(stack_t **top, unsigned int line_number);
void exec_div(stack_t **top, unsigned int line_number);
void exec_mul(stack_t **top, unsigned int line_number);
void exec_mod(stack_t **top, unsigned int line_number);
void exec_pchar(stack_t **top, unsigned int line_number);
#endif
