#include "holberton.h"

/**
 * more_numbers - a fn to print numbers 0 to 14 ten times
 *
 * @void: no params
 *
 * Return: void
 */

void more_numbers(void)
{
	char i, a, b, c;

	i = 0;

	while (i < 10)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c < 10)
				b = c;
			else
			{
				a = c / 10;
				b = c % 10;
				_putchar('0' + a);
			}
			_putchar('0' + b);
		}

		_putchar('\n');
		i++;
	}

}
