#include "holberton.h"

/**
 * _isdigit - a funct to check if a character is a one digit number 0 - 9
 *
 * @c: character to check
 *
 * Return: 0 or 1
 *
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')

		return (1);

	return (0);

}
