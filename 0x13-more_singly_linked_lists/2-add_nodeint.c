#include "lists.h"
/**
 * add_nodeint - function to adds a node at the end
 * @head: start of node
 * @n: value to give new node
 * Return: linked list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;

	*head = new;

	return (*head);
}
