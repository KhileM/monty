#include "monty.h"

/**
 * pall - prints a stack
 *@stack: double pointer to the stack of the list
 * @line_number:  the execution line number
*/
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current;

	(void) line_number;

	current = *stack;

	while (current != NULL)
	{
		printeger(current->n);
		write(STDOUT_FILENO, "\n", 1);
		current = current->next;
	}
}
