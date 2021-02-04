#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: 0 when successfully run to completion
 */
int main(void)
{
	int n = 0;

	while (n < 100)
	{
		putchar((n / 10) + '0');
		putchar((n % 10) + '0');
		if (n != 99)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
