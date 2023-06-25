#include "monty.h"

/**
 * pop - deletes the last added node (the head)
 * @stack: double pointer to the head
 * @line_number: the execution line number
 */
void pop(stack_t **stack, unsigned int line_number)
{

	if (*stack == NULL || stack == NULL)
	{
		free_stack(stack);
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->next == NULL)
	{
		free(*stack);
		*stack = NULL;
		return;
	}
	*stack = (*stack)->next;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
