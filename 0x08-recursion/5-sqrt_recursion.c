#include "holberton.h"

int find_sqrt(int sqrt, int n);

/**
 * _sqrt_recursion - returns the natural square root
 *
 * @n: the number we are finding the square root of
 *
 * Return: the natural square root or -1
 */

int _sqrt_recursion(int n)
{

	if (n < 0)

		return (-1);

	return (find_sqrt(0, n));

}

/**
 * find_sqrt - checks for square root based on number
 * @n: the number we are looking for the square root of
 * @sqrt: the possible root
 *
 * Return: return the root or -1
 */

int find_sqrt(int sqrt, int n)
{

	if (sqrt * sqrt > n)

		return (-1);

	if (sqrt * sqrt == n)

		return (sqrt);

	return (find_sqrt(sqrt + 1, n));

}
