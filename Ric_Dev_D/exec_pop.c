#include "monty.h"
/**
 * exec_pop - execute push opcode
 * @top: pointer to the top of stack
 * @line_number: number of line in the file
 * Return: void
 */
void exec_pop(stack_t **top, unsigned int line_number)
{
	stack_t *tmp = NULL;

	if (*top != NULL)
	{
		if ((*top)->next != NULL)
		{
			tmp = (*top)->next;
			free(*top);
			tmp->prev = NULL;
			*top = tmp;
		}
		else
		{
			free(*top);
			*top = NULL;
		}
	}
	else
		errorhandling(7, line_number, top);
}
