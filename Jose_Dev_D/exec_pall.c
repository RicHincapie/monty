#include "monty.h"
/**
* exec_pall - execute pall opcode
* @top: pointer to the top of stack
* @line_number: number of line in the file
* Return: void
*/
void exec_pall(stack_t **top, unsigned int line_number)
{
	stack_t *temp = *top;

	line_number += 0;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
