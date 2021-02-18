#include "holberton.h"

/**
 * _strncpy - writes a function that copies a string
 * @dest: pointer to dest string
 * @src: pointer to src string
 * @n: number of bytes from src
 * Return: the pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src_len = 0;

	int j = 0, dest_len = 0;

	while (src[i])
		src_len++;

	while (dest[i])
		dest_len++;

	if (src_len < dest_len)
	{
		if (src_len > n)
		{
			for (i = 0; i < n; i++)
				dest[i] = src[i];
		}


		else
		{
			for (i = 0; i < src_len; i++)
				dest[i] = src[i];

			for (j = src_len; j < n; j++)
				dest[i] = '\0';
		}

		return (dest);
	}

	else
		return (dest);
}
