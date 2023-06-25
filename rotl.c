#include "monty.h"

/**
 * rotl - rotates the stack to the top.
 * @stack: double pointer to the top of the stack
 * @line_number:  the execution line number
 *
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = NULL;

	(void) line_number;

	if (*stack == NULL || (*stack)->next == NULL)
		return;

	tmp = *stack;

	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = *stack;
	(*stack)->prev = tmp;

	tmp = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	 tmp->next = NULL;
}
