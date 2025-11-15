#include "3-calc.h"
#include <stddef.h>
/**
 * op_add - returns the sum of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns the difference of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the result of a minus b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns the product of two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the result of dividing one integer by another
 * @a: the first integer (numerator)
 * @b: the second integer (denominator)
 *
 * Return: the result of a divided by b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns the remainder of a division between two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
