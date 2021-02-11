#include "holberton.h"

/**
 * print_most_numbers - a func to print numbers from 0 to 9 omitting 2 and 4
 *
 * @void: no params
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int c = '0';

	while (c <= '9')
	{
		if (!(c == '2' || c == '4'))
			_putchar(c);

		c++;
	}
	_putchar('\n');
}
