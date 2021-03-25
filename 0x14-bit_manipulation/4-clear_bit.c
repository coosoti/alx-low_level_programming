#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: the number to set the value of
 * @index: index of the bit we want to set, starting from 0
 * Return: 1 if it worked, or -1 if it failed
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= ~(1 << index);
	return (1);

}
