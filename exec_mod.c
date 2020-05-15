#include "monty.h"
/**
 * exec_mod - execute div opcode
 * @top: pointer to the top of stack
 * @line_number: number of line in the file
 * Return: void
 */
void exec_mod(stack_t **top, unsigned int line_number)
{
	stack_t *tmp = NULL;

	if (*top == NULL)/* 0 element in stack */
		errorhandling(14, line_number, top);
	else if ((*top)->next != NULL)
	{
		if ((*top)->n == 0)
			errorhandling(12, line_number, top);/*top elemen 0*/
		tmp = (*top)->next;
		tmp->n = tmp->n % (*top)->n;
		free(*top);
		tmp->prev = NULL;
		*top = tmp;
	}
	else
		errorhandling(14, line_number, top);/*1 element only */
}
