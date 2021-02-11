#include "holberton.h"

/**
 * _isupper - a funct to check if a character is upper case or otherwise //
 *
 * @c: input argument
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)

		return (1);

	return (0);
}
