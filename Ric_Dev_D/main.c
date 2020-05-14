#include "monty.h"

int main(int argc, char *argv[])
{
	FILE *fp;
	char * line = NULL;
	size_t len = 0;
	ssize_t read;
	char * sentence = NULL;
	unsigned int line_number = 1;
	stack_t *top = NULL;

	if (argc != 2) /*ERROR handling*/
		errorhandling(1, line_number);
	   /* Needs to set ERROR_handling function*/
	fp = fopen(argv[1], "r"); /*TEST pending*/
	file_name = argv[1];
	if (fp == NULL)
		errorhandling(2, line_number); /* Needs to set ERROR_handling function*/
	/*Reading, searching and executing line by line*/
	while ((read = getline(&line, &len, fp)) != -1)
	{
		sentence = line;
		op_code = strtok(sentence, "\n ");
		argument = strtok(NULL, "\n ");/*Takes in a char*/
		if (op_code != NULL)
			top = search_exec(&top, op_code, line_number);
		line_number++;
		/*printf("%s", line);*/ 
		
	}

	/* EOF (EXIT_SUCCESS FREE MEMORY */
	fclose(fp);
	if (line)
		free(line);/* Buffer from getline() */
	exit(EXIT_SUCCESS);
	

}