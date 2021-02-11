#include "holberton.h"

/**
 * print_diagonal - func to print diagonal using backward slash ('\')
 *
 * @n: number of times \ is used
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, s;

	if (n <= 0)
		_putchar('\n');

	for (i = 0; i < n; i++)
	{
		for (s = 0; s < i; s++)
		{
			_putchar(' ');

		}
		_putchar('\\');
		_putchar('\n');
	}
}
