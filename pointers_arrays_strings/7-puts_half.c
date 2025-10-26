#include "main.h"
/**
 * puts_half - prints the second half of a string
 * followed by a new line
 * @str: the input string
 */
void puts_half(char *str)
{
	int len = 0;
	int n;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2 + 1;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
