#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - function to get node at index
 * @head: linked list at head
 * @index: index of node to grab
 * Return: node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp;

	tmp = head;
	while (i != index && tmp != NULL)
	{
		i++;
		tmp = tmp->next;
	}

	if (i != index)
		return (NULL);
	return (tmp);
}
