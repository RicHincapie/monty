#include "monty.h"
/**
 * exec_div - execute div opcode
 * @top: pointer to the top of stack
 * @line_number: number of line in the file
 * Return: void
 */
void exec_div(stack_t **top, unsigned int line_number)
{
	stack_t *tmp = NULL;

	if (*top == NULL)
		errorhandling(11, line_number, top);
	else if ((*top)->next != NULL)
	{
		if ((*top)->n == 0)
			errorhandling(12, line_number, top);
		tmp = (*top)->next;
		tmp->n = tmp->n / (*top)->n;
		free(*top);
		tmp->prev = NULL;
		*top = tmp;
	}
	else
		errorhandling(11, line_number, top);
}
