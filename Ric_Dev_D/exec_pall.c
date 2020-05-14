#include "monty.h"
/**
*
*
* 
* 
*/
void exec_pall(stack_t **top, unsigned int line_number)
{
	stack_t *temp = *top;

	line_number += 0;
	if (*top == NULL)
		return;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return;
}
