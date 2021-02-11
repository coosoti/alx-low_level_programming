#include "holberton.h"

/**
 * print_square - a func to print a square using # characters
 *
 * @size: number of # characters
 *
 */

void print_square(int size)
{
	int h = 0;
	int l = 0;

	if (size <= 0)
		_putchar('\n');

	while (h < size)
	{
		for (l = 0; l < size; l++)
			_putchar('#');

		h++;
		_putchar('\n');
	}

}
