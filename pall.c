#include "monty.h"

/**
 * function_pall - function that prints all the elements in a stack.
 * @head: A double pointer to the stack. It points to the head of the stack
 * @counter: An unused line count
 *
 * Return: nothing
 *
 */
void function_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
