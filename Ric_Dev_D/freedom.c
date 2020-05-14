#include "monty.h"

void freedom(stack_t **top, int flag)
{
        stack_t *tmp = *top;

        while(*top != NULL)
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
        return;
}
