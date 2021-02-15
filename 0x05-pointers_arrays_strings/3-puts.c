#include "holberton.h"

/**
 * _puts - a func to print a string followed by a newline
 *
 * @str: string to be printed to stdout
 *
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;

	}
	_putchar('\n');

}
