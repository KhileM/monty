#include "monty.h"

/**
 * is_integer - checks if a string is an integer
 *@opcode: the string to go though
 *Return: 1 if it is an integer and 0 otherwise
 */
int is_integer(char *opcode)
{
	int i = 0;

	if (opcode != NULL)
	{
		if (opcode[i] == '-')
		{
			if (opcode[++i] == '\0')
				return (0);
		}

		while (opcode[i] != '\0')
		{
			if (isdigit(opcode[i]))
				i++;
			else
				return (0);
		}
		return (1);
	}
	return (0);
}
