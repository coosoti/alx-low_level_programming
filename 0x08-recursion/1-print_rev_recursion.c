#include "holberton.h"

/**
 * _print_rev_recursion - function to print a string in reverse.
 * @s: The string to be printed.
 *
 * Return: Void
 */

void _print_rev_recursion(char *s)
{

	/* base case */
	if (*s == '\0')

		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);

}
