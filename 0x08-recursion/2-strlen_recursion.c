#include "holberton.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to find the length of
 *
 * Return: length of string or return 0
 */

int _strlen_recursion(char *s)
{

	/* base case */
	if (*s == '\0')

		return (0);

	return (1 + _strlen_recursion(s + 1));

}
