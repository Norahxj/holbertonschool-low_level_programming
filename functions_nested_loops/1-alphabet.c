#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Description: prints letters 'a' to 'z', followed by a new line
 */
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
