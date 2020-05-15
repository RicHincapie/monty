#include "monty.h"
/**
 * exec_push - execute push opcode
 * @top: pointer to the top of stack
 * @line_number: number of line in the file
 * Return: void
 */
void exec_push(stack_t **top, unsigned int line_number)
{
	stack_t *new_node = NULL;
	int argument_atoi = 0;
	int result = 0; /* checks for argument only numbers*/

	line_number += 0;
	result = argument_checker(line_number, top);/* 0, error; 1, correct */
	if (result == 0)
		errorhandling(5, line_number, top);
		/* ERROR_handling*/
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
		errorhandling(4, line_number, top);
		/* handle malloc_ERROR  */
	new_node->next = NULL;
	new_node->prev = NULL;
	argument_atoi = atoi(s->ar);/* check ¿push 4fhhjs4? TEST atoi cases */
	new_node->n = argument_atoi;
	if (*top != NULL)/* If stack is not empty */
	{
		(*top)->prev = new_node;
		new_node->next = *top;
		*top = new_node;
	}
	*top = new_node;
}
/**
 * argument_checker - check if the argument is an integer
 * @line_number: number of line in the open file
 * @top: pointer to the top of the stack
 * Return: 1 if is a number otherwise 0
 */
int argument_checker(unsigned int line_number, stack_t **top)
{
	int i = 0;

	if (s->ar == NULL)
		errorhandling(5, line_number, top);
	while (s->ar[i] != '\0')
	{	/*Cheking if it's a letter and not equal to <->*/
		if ((s->ar[i] < 48 || s->ar[i] > 57) && s->ar[i] != 45)
			return (0);
		i++;
	}
	return (1);
}

