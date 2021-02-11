#include "holberton.h"

/**
 * print_numbers - a function to print numbers from 0 to 9
 *
 * @void: no params
 *
 * Return: void
 */

void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
