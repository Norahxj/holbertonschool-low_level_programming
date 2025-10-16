#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0
 *
 * Description: Uses only putchar to print 0 to 9 followed by a new line.
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar(n + '0');
	putchar('\n');

	return (0);
}
