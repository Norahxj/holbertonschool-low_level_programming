#include "main.h"
/**
 * find_root - helper to find the natural square root recursively
 * @n: number to find the square root of
 * @i: current guess
 * Return: natural square root or -1
 */
int find_root(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (find_root(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_root(n, 0));
}
