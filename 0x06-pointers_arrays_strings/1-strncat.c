#include "holberton.h"

/**
 * _strncat - concatenates two strings with at most n bytes from src
 * @dest: pointer to dest string
 * @src: pointer to src string
 * @n: number of bytes from src
 * Return: the pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
