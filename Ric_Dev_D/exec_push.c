#include "monty.h"

void exec_push(stack_t **top, unsigned int line_number)
{
	stack_t *new_node = NULL;
	int argument_atoi = 0;
	int result = 0; /* checks for argument only numbers*/

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Could not allocate in exec_push");
		/* handle malloc_ERROR  */
	}
	new_node->next = NULL;
	new_node->prev = NULL;
	result = argument_checker();/* 0, error; 1, correct */
	if (result == 0)
	{
		/* ERROR_handling*/
	}
	argument_atoi = atoi(argument);/* ¿push 4fhhjs4? TEST atoi cases */
	new_node->n = argument_atoi;
	if (*top == NULL)/* If stack is empty */
	{
		*top = new_node;
	}
	(*top)->prev = new_node;
	new_node->next = *top;
	*top = new_node;
}

int argument_checker()
{
	int i = 0;
	
	while(argument[i] != '\0')
	{
		if(argument[i] < 48 || argument[i] > 57)
			return(0);
		i++;
	}
	return(1);
}

