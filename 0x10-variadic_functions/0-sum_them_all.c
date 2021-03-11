#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of arguments
 * Return: returns the sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;
	va_list a_list;

	if (n == 0)
		return (0);

	va_start(a_list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(a_list, int);

	va_end(a_list);

	return (sum);

}
