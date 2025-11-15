#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything based on format string
 * @format: list of types of arguments passed
 * c: char, i: integer, f: float, s: char *
 * ...: variable arguments to be printed
 *
 * Description: If string is NULL, prints "(nil)".
 * Any other char in format is ignored.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *sep = "";
	char *s;

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c' || format[i] == 'i' ||
		    format[i] == 'f' || format[i] == 's')
		{
			printf("%s", sep);
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 'i':
					printf("%d", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
				case 's':
					s = va_arg(args, char *);
					if (!s)
						s = "(nil)";
					printf("%s", s);
					break;
			}
			sep = ", ";
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
