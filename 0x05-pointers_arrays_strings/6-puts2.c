#include "holberton.h"

/**
 * puts2 - a func to print every other number in a string
 *
 * @str: string params
 *
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;
	int len = 0;

	while (str[i++])

		len++;

	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	
	_putchar('\n');
}
