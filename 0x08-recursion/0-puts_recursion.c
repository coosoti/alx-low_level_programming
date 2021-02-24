#include "holberton.h"

/**
 * _puts_recursion - s function to print a string followed by a new line
 *
 * @s: string to print
 *
 * Return: void
 */

void _puts_recursion(char *s)
{

	/* base case */
	if (*s == '\0')
	{

		_putchar('\n');
		return;

	}

	_putchar(*s); /* print the first letter in the string */
	_puts_recursion(s + 1);

}
