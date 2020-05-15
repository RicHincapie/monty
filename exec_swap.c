#include "monty.h"
/**
 * exec_swap - execute swap opcode
 * @top: pointer to the top of stack
 * @line_number: number of line in the file
 * Return: void
 */
void exec_swap(stack_t **top, unsigned int line_number)
{
	int tmp = 0;

	if (*top == NULL)
		errorhandling(8, line_number, top);
	else if ((*top)->next != NULL)
	{
		tmp = (*top)->n;
		(*top)->n = (*top)->next->n;
		(*top)->next->n = tmp;
	}
	else
		errorhandling(8, line_number, top);
}
