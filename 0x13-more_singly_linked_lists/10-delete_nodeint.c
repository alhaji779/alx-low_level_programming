#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - function to delete a node
 * @head: linked list
 * @index: index of deleted node
 * Return: 1 or 0
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *_d;
	unsigned int count = 0;

	tmp = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		tmp = tmp->next;
		free(*head);
		*head = tmp;
		return (1);
	}
	else
	{
		while (tmp != NULL && count != index - 1)
		{
			count++;
			tmp = tmp->next;
		}
		if (count != index - 1)
			return (-1);
		_d = tmp->next;
		tmp->next = tmp->next->next;
		free(_d);
		return (1);
	}

}
