#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry Point
 *
 * Description: print Fizz to replace multiples of 3, Buzz for multiples of 5
 * and FizzBuzz for multiples of both 3 and 5
 *
 * Return: 0 on success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{

		if ((i % 3) == 0 && (i % 5) != 0)

			printf("Fizz");

		else if ((i % 3) != 0 && (i % 5) == 0)

			printf("Buzz");

		else if ((i % 3) == 0 && (i % 5) == 0)

			printf("FizzBuzz");

		else
			printf("%d", i);

		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);

}
