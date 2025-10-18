#include <stdio.h>

/**
 * main - combinations of single-digit numbers
 *
 * Description: Numbers must be separated by , and
 * followed by a space and they should be should be printed in ascending order
 *
 * Return: 0 after success
 */
int main(void)
{
	int i,

	   for (i = '0'; i <= '9'; i++)
	   {
		  putchar(i);
		 if (i != '9')
		 {
			putchar(',');
		       putchar(' ');
		 }
	   }
putchar('\n');
return (0);
}
