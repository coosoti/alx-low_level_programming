#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: separator to print between the strings
 * @n: number of strings to print
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a_list;
	unsigned int i;
	char *str;

	va_start(a_list, n);

	for (i = 0; i < n; i++)
	{

		str = va_arg(a_list, char *);
		if (i != n - 1 && separator != NULL)
		{
			if (str != NULL)
				printf("%s%s", str, separator);

			else
				printf("(nil)%s", separator);

		}
		else
			if (str != NULL)
				printf("%s", str);
			else
				printf("(nil)");

	}
	printf("\n");
	va_end(a_list);

}
