#include "monty.h"

/**
 * free_stack - frees the memory allocated for a doubly linked list.
 * @head: pointer to the head of the stack.
 *
 * Return: Nothing
 *
 */
void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
