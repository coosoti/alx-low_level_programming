#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: number of bytes to allocate
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *mem_alloc;

	mem_alloc = malloc(b);

	if (mem_alloc == NULL)
		exit(98);

	return (mem_alloc);

}
