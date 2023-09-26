#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - function to frees a list
 * @head: head args
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
