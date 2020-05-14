#include "monty.h"

stack_t *search_exec(stack_t **top, char *op_code, unsigned int line_number)
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
                    funct_arrays[i].f(&(*top), line_number);
                }
                i++;
        }
        if (i == 2)/*It deppends on the # of opcodes available in funct_arrays*/
                errorhandling(3, line_number);
                /* ERROR_handling function */
        return(*top);
}
