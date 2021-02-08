#include "holberton.h"

/**
 * _islower - func to check if a letter is lowercase by comparing with their
 * ASCII numbers equivalent
 * @c: character for comparasion
 * Return: 0 or 1
 *
 */

int _islower(int c)
{

	if ((c >= 97) && (c <= 122))
		return (1);

	else
		return (0);
}
