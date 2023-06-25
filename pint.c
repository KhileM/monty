#include "monty.h"

/**
 * pint - Prints the last added node (the head)
 * @stack: double pointer to the head
 * @line_number: the execution line number
 */
void pint(stack_t **stack, unsigned int line_number)
{
	(void) line_number;

	if (*stack == NULL || stack == NULL)
	{
		free_stack(stack);
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printeger((*stack)->n);
	write(STDOUT_FILENO, "\n", 1);
}
