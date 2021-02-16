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


	while (*(str + i))
	{
		_putchar(*(str + i));
		i = i + 2;

	}
	_putchar('\n');
}
