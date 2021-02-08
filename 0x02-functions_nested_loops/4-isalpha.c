#include "holberton.h"

/**
 * _isalpha - check if a character is an alphabet character
 *
 * @c: characcter to check
 *
 * Return: 0 or 1
 *
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
