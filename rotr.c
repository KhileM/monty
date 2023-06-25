#include "monty.h"

/**
 * rotr - rotates the stack to the bottom.
 * @stack: double pointer to the top of the stack
 * @line_number:  the execution line number
 *
 */
void rotr(stack_t **stack, unsigned int line_number)
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

	*stack = tmp;
	tmp = tmp->prev;

	tmp->next = NULL;
	(*stack)->prev = NULL;
}
