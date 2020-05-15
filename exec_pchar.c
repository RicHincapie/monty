#include "monty.h"
/**
 * exec_pchar - execute pchar opcode
 * @top: pointer to the top of stack
 * @line_number: number of line in the file
 * Return: void
 */
void exec_pchar(stack_t **top, unsigned int line_number)
{
	if (*top == NULL)
		errorhandling(15, line_number, top);
	else if ((*top)->n >= 0 && (*top)->n <= 255)
		printf("%c\n", (*top)->n);
	else
		errorhandling(16, line_number, top);
}
