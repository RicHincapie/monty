#include "monty.h"

stack_t *search_exec(char *op_code, unsigned int line_number)
{
        int i = 0;
        stack_t *top = NULL;

        instruction_t funct_arrays[] = {
                {"push", exec_push(&top, line_number)},
                {"pall", exec_pall(&top, line_number)},
                {NULL, NULL}
        };
        while(funct_arrays[i].opcode != NULL)
        {
                if(funct_arrays[i].opcode == op_code)
                {
                    funct_arrays[i].f(&stack, line_number);
                }
                i++;
        }
        if (i == 2)/*It deppends on the # of opcodes available in funct_arrays*/
        {
                /* error_handling(); */
                /* ERROR_handling function */
        }
        return(top);
}

typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;



typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;