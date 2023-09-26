#include "lists.h"
/**
 * print_listint - funct to print int in list
 * @h: struct listint_t type
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
