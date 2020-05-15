#include "monty.h"
/**
 * exec_pint - execute pint opcode
 * @top: pointer to the top of stack
 * @line_number: number of line in the file
 * Return: void
 */
void exec_pint(stack_t **top, unsigned int line_number)
{
	if (*top == NULL)
		errorhandling(6, line_number, top);
	printf("%d\n", (*top)->n);
}
