#include "monty.h"

/**
 * add_stack -  function that adds the top two elements of the stack
 * @head: double pointer to the stack's head
 * @counter: the line number where the "add" opcode is encountered.
 *
 * Return: no return
 */
void add_stack(stack_t **head, unsigned int counter)
{
	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		exit(EXIT_FAILURE);
	}

	(*head)->next->n += (*head)->n;
	*head = (*head)->next;
	free((*head)->prev);
	(*head)->prev = NULL;
}
