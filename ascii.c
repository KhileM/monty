#include "monty.h"

/**
 * is_ascii - Checks if a character is within the ASCII range.
 * @c: The character to be checked.
 *
 * Return: 1 if the character is within the ASCII range, 0 otherwise.
 */
int is_ascii(int c)
{
	return (c >= 0 && c <= 127);
}
