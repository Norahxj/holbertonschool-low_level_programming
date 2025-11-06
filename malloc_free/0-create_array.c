#include <stddef.h>
#include <stdlib.h>
#include "main.h"
/**
 * *create_array - a function that creates an array of chars
 * and initializes it with a specific char
 * @size: size of array
 * @c: character to initialize the array
 * Return: NULL if size 0
 * and pointer to the array
 * or NULL if it failed
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
