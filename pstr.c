#include "monty.h"

/**
 * pstr -  prints the string starting at the top of the stack
 * @stack: double pointer to the top of the stack
 * @line_number:  the execution line number
 *
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	char c;

	(void) line_number;

	if (stack != NULL && *stack != NULL)
	{
		tmp = *stack;
		while (tmp != NULL && tmp->n != 0 && is_ascii(tmp->n))
		{
			c = (char)tmp->n;
			write(1, &c, 1);
			tmp = tmp->next;
		}
	}
	write(1, "\n", 1);
}
