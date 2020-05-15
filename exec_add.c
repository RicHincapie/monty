#include "monty.h"
/**
 * exec_add - execute add opcode
 * @top: pointer to the top of stack
 * @line_number: number of line in the file
 * Return: void
 */
void exec_add(stack_t **top, unsigned int line_number)
{
	stack_t *tmp = NULL;

	if (*top == NULL)
		errorhandling(9, line_number, top);
	else if ((*top)->next != NULL)
	{
		tmp = (*top)->next;
		tmp->n = tmp->n + (*top)->n;
		free(*top);
		tmp->prev = NULL;
		*top = tmp;
	}
	else
		errorhandling(9, line_number, top);
}
