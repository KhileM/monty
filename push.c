#include "monty.h"

void push(stack_t **stack, unsigned int line_number);

/**
 * push - pushes an element to the stack.
 * @stack: double pointer to the top of the stack
 * @line_number:  the execution line number
 *
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node = NULL, *tmp = NULL;
	char *opcode = strtok(NULL, " \t\n");
	int arg;

	if (!is_integer(opcode))
	{
		free_stack(stack);
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	arg = atoi(opcode);

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		free_stack(stack);
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = arg;
	new_node->prev = NULL;

	if (*stack == NULL || stack == NULL)
	{
		new_node->next = NULL;
		*stack = new_node;
		return;
	}

	if (info.mode == 2) /* Queue mode */
	{
		tmp = *stack;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
		new_node->prev = tmp;
		new_node->next = NULL;
	}
	else    /* Stack mode */
	{
		new_node->next = *stack;
		(*stack)->prev = new_node;
		*stack = new_node;
	}
}
