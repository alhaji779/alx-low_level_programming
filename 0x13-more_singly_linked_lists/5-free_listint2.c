#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - function to frees a list
 * @head: head args
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *t;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		t = *head;
		free(*head);
		*head = t->next;
	}
	*head = NULL;
}
