#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the list
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
        size_t count = 0;

        while (h != NULL)
        {
                h = h->next;
                        count++;
        }
        return (count);
}
