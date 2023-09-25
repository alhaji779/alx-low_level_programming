#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - function to delete a node
 * @head: head args
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	int v = 0;
	listint_t *tmp;

	if (*head == NULL)
		return (v);
	tmp = *head;
	v = tmp->n;
	free(*head);
	*head = tmp->next;

	return (v);
}
