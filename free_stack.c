#include "monty.h"

/**
 * free_stack - frees a doubly linked list
 * @stack: pointer to the top node of the stack
 */
void free_stack(stack_t **stack)
{

	if (info.code_file != NULL)
		fclose(info.code_file);

	if (info.opcode != NULL)
		free(info.opcode);

	if (stack && *stack != NULL)
	{
		while ((*stack)->next != NULL)
		{
			*stack = (*stack)->next;
			free((*stack)->prev);

		}
		free(*stack);
		stack = NULL;
	}
}
