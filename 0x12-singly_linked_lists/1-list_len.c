#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - function to count elements of list
 * @h: head
 * Return: count
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	if (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
