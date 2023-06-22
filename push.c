#include "monty.h"

/**
 * function_push - a function that adds node to the stack.
 * @head: a double pointer to the stack
 * @counter: the line count
 *
 * Return: nothing
 *
 */
void function_push(stack_t **head, unsigned int counter)
{
	int i, m = 0, flag = 0;
	MontyBus bus = { arg = NULL, file = NULL, content = NULL, lifi = 0 };

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			m++;
		for (; bus.arg[m] != '\0'; m++)
		{
			if (bus.arg[m] > 57 || bus.arg[m] < 48)
				flag = 1;
		}
		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	i = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, i);
	else
		addqueue(head, i);
}
