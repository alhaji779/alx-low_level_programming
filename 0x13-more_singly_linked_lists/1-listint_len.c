#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * listint_len -  function to show length of linked list
 * @h: struct argument
 * Return: element count
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
