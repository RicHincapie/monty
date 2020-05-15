#include "monty.h"
/**
 * main - monty main function
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: void
 */
int main(int argc, char *argv[])
{
	unsigned int line_number = 1;
	size_t len = 0;
	ssize_t read;
	FILE *fp;
	char *line = NULL, *sentence = NULL;
	char *file_name, *op_code;
	stack_t *top = NULL;

	if (argc != 2) /*ERROR handling*/
		errorhandling(1, line_number, &top);
	fp = fopen(argv[1], "r"); /*TEST pending*/
	file_name = argv[1];
	if (fp == NULL)/* Error FLAG: 2 */
	{
		fprintf(stderr, "Error: Can't open file %s\n", file_name);
		exit(EXIT_FAILURE);
	}
	s = malloc(sizeof(global_awesome));
	s->fp = fp;
	if (s == NULL)
		printf("Global Awesome did't Malloc\n");
	while ((read = getline(&line, &len, fp)) != -1)
	{
		sentence = line;
		op_code = strtok(sentence, "\n ");
		s->ar = strtok(NULL, "\n ");/*Takes in a char*/
		s->line = line;
		if (op_code != NULL)
			top = search_exec(&top, op_code, line_number);
		line_number++;
	}
	fclose(fp);
	if (s->line != NULL)
		free(s->line);/* Buffer from getline() */
	free(s);
	if (top != NULL)
		freedom(&top, 0);
	exit(EXIT_SUCCESS);
}
