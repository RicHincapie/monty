#include "monty.h"
/**
 *
 *
 *
 *
 *
 */
void errorhandling(int flag, unsigned int line_number, stack_t **top)
{
	/*First case: not file or more than one argument to monty*/
	if (flag == 1)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	/* else if (flag == 2)
	fprintf(stderr, "Error: Can't open file %s\n", file_name);*/
	/* else if (flag == 3)
	fprintf(stderr, "L%d: unknown instruction %s\n", ln, op_code);*/
	else if (flag == 4)
		fprintf(stderr, "Error: malloc failed\n");
	else if (flag == 5)
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
	freedom(top, 1);
	exit(EXIT_FAILURE);
}