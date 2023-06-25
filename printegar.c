#include "monty.h"
#include <stdio.h>

/**
 * printeger - prints an integer to the stdout
 *@number: the integer to printeger
 *
*/
void printeger(int number)
{
	char buffer[20];
	int len = snprintf(buffer, sizeof(buffer), "%d", number);

	write(STDOUT_FILENO, buffer, len);
}
