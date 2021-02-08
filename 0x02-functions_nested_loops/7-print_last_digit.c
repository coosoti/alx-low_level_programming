#include "holberton.h"

/**
 * print_last_digit - func to prints and return the last digit of a number
 *
 * @n: number to determine its last digit
 *
 * Return: l last digit
 */

int print_last_digit(int n)
{
	int l = n % 10;

	if (l >= 0)
	{
		_putchar(l + '0');
		return (l);
	}

	else
	{
		_putchar(-l + '0');
		return (-l);
	}
}
