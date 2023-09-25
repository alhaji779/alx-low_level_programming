#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * add_nodeint - function to add node
 * @head: node arg
 * @n: value for new node
 * Return: the linked list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ad_nod;

	ad_nod = malloc(sizeof(listint_t));
	if (ad_nod == NULL)
		return (NULL);
	ad_nod->n = n;
	ad_nod->next = *head;

	*head = ad_nod;

	return (*head);
}
