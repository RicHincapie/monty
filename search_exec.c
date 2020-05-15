#include "monty.h"
/**
 * search_exec - search for the operation code
 * @top: pointer to the top of the stack
 * @op_code: opcode of the line
 * @ln: line number
 * Return: pointer to a stack_t doubly linked list
 */
stack_t *search_exec(stack_t **top, char *op_code, unsigned int ln)
{
	int i = 0;

	instruction_t funct_arrays[] = {
		{"push", exec_push},
		{"pall", exec_pall},
		{"pint", exec_pint},
		{"pop", exec_pop},
		{"swap", exec_swap},
		{"add", exec_add},
		{"nop", exec_nop},
		{"sub", exec_sub},
		{"div", exec_div},
		{"mul", exec_mul},
		{"mod", exec_mod},
		{"pchar", exec_pchar},
		{NULL, NULL}
	};
	while (funct_arrays[i].opcode != NULL)
	{
		if (strcmp(funct_arrays[i].opcode, op_code) == 0)
		{
			funct_arrays[i].f(&(*top), ln);
			break;
		}
		i++;
	}
	if (i == 12)/*It deppends on the # of opcodes available in funct_arrays*/
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", ln, op_code);
		if (top != NULL)
			freedom(top, 0);
		free(s->line);
		fclose(s->fp);
		free(s);
		exit(EXIT_FAILURE);
	}
	return (*top);
}
