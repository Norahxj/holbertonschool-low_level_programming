#include <main.h>
/**
 * *_memcpy - a function that copies memory area
 * @dest: memory area
 * @src: memory area
 * @n: bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsighned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
