#include "holberton.h"

/**
 * _abs - func to get the absolute value |n| of a number n
 *
 * @n: Number we need its absolute value
 *
 * Return: number n
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);

	else
	{
		n = n * -1;
		return (n);
	}
}
