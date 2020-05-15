#include "monty.h"
/**
 * freedom - frees memory allocation
 * @top: pointer to the top of the stack
 * @flag: flag that determine which memory allocation to free
 * Return: void
 */
void freedom(stack_t **top, int flag)
{
	stack_t *tmp = *top;

	while (*top != NULL)
	{
		tmp = tmp->next;
		free(*top);
		*top = tmp;
	}
	if (flag == 1)
	{
		free(s->line);/* Buffer from getline() */
		fclose(s->fp);
		free(s);
	}
}
