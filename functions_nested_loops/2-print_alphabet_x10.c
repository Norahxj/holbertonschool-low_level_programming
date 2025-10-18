#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase
 *
 * Description: uses only 2 _putchar calls to print all letters and new lines
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		j = 'a';
		while (j <= 'z')
			_putchar(j++);
		_putchar('\n');
	}
}
