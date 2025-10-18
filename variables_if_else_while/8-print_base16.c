#include <stdio.h>

/**
 * main - write base 16 numbers
 *
 * Description: creat a program to print all the number in base 16 in lowercase
 *
 * Return: 0 after success
 */
int main(void)
{
	char c;


	for (c = '0'; c <= 'f'; c++)
{
		if (c > '9' && c < 'a')
			continue;
		putchar(c);
}
	putchar('\n');
	return (0);
}
