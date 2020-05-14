#include "monty.h"

void exec_push(stack_t **top, unsigned int line_number)
{
	stack_t *new_node = NULL;
	int argument_atoi = 0;
	int result = 0; /* checks for argument only numbers*/

	line_number += 0;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
		errorhandling(4, line_number);
		/* handle malloc_ERROR  */
	new_node->next = NULL;
	new_node->prev = NULL;
	result = argument_checker(line_number);/* 0, error; 1, correct */
	if (result == 0)
		errorhandling(5, line_number);
		/* ERROR_handling*/
	argument_atoi = atoi(argument);/* check ¿push 4fhhjs4? TEST atoi cases */
	new_node->n = argument_atoi;
	if (*top != NULL)/* If stack is not empty */
	{
		(*top)->prev = new_node;
		new_node->next = *top;
		*top = new_node;
	}
	*top = new_node;
}

int argument_checker(unsigned int line_number)
{
	int i = 0;

	if (argument == NULL)
		errorhandling(5, line_number);
	while(argument[i] != '\0')
	{	/*Cheking if it's a letter and not equal to <->*/
		if((argument[i] < 48 || argument[i] > 57) && argument[i] != 45)
			return(0);
		i++;
	}
	return(1);
}

