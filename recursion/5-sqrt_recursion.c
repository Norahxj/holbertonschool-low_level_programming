#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: character
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);
	if (i * i == n)
	{
		int result = i;

		i = 0;
		return (result);
	}
	if (i * i > n)
	{
		i = 0;
		return (-1);
	}
	i++;
	return (0);
}
