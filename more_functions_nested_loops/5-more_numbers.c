#include "main.h"
/**
 * more_numbers - prints numbers from 0 to 14, 10 times
 * followed by a new line
 *
 * Return: (0)
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 14; i++)
	{
		j = 'a';
		while (j <= 'z')
			_putchar(j++);
		_putchar('\n');
	}
}
