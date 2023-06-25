#include "monty.h"

/**
 * swap - swaps the top two elements of the stack
 * @stack: double pointer to the top of the stack
 * @line_number: the execution line number
*/
void swap(stack_t **stack, unsigned int line_number)
{
	int i;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	i = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = i;
}
