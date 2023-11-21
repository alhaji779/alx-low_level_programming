#include "lists.h"
/**
 * print_listint - function to print list
 * @h: struct listint_t type
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
