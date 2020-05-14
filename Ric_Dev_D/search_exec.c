#include "monty.h"

stack_t *search_exec(stack_t **top, char *op_code, unsigned int ln)
{
        int i = 0;

        instruction_t funct_arrays[] = {
                {"push", exec_push},
                {"pall", exec_pall},
                {NULL, NULL}
        };
        while(funct_arrays[i].opcode != NULL)
        {
                if(strcmp(funct_arrays[i].opcode, op_code) == 0)
                {
                    funct_arrays[i].f(&(*top), ln);
                    break;
                }
                i++;
        }
        if (i == 2)/*It deppends on the # of opcodes available in funct_arrays*/
        {
                fprintf(stderr, "L%d: unknown instruction %s\n", ln, op_code);
                if (top != NULL)
                        freedom(top, 0);
                free(s->line);
                fclose(s->fp);
                free(s);
                exit(EXIT_FAILURE);
        }
        return(*top);
}
