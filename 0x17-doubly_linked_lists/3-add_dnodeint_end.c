#include "lists.h"
/**
 * add_dnodeint_end - adds node
 * @head: head address of linked list
 * @n: number of new node
 * Return: address of node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *new;

	tmp = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->prev = NULL;
	new->n = n;
	if ((*head) == NULL)
	{
		*head = new;
		return (new);
	}
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	new->prev = tmp;
	tmp->next = new;
	return (new);
}
