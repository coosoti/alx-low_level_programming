#include "holberton.h"

/**
 * times_table - func to print 9 times table
 *
 * @void: no params
 *
 * Return: void
 *
 */


void times_table(void)
{
	int i = 0;
	int j = 0;

	while (j <= 9)
	{
		i = 0;
		while (i <= 9)
		{
			if ((j * i) > 9)
			{
				_putchar(' ');
				_putchar(((j * i) / 10) + '0');
				_putchar(((j * i) % 10) + '0');
			}
			else
			{
				if (i != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar((j * i) + '0');
			}
			if (i != 9)
				_putchar(',');
			i++;
		}
		_putchar('\n');
		j++;
	}
}
