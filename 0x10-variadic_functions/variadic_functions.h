#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct print - print type with corresponding print function
 * @t: print type
 * @f: print function
 */
typedef struct print
{
	char *type;
	void (*func)(va_list);
} dt_t;

#endif /* _VARIADIC_FUNCTIONS_H */
