#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * add_nodeint_end - function that adds node at the end of list
 * @head: head node args
 * @n: args
 * Return: struct
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ad_nod;
	listint_t *t;

	ad_nod = malloc(sizeof(listint_t));
	if (ad_nod == NULL)
		return (NULL);
	ad_nod->n = n;
	ad_nod->next = NULL;
	if (*head == NULL)
	{
		*head = ad_nod;
		return (ad_nod);
	}
	else
	{
		t = *head;
		while (t->next != NULL)
		{
			t = t->next;
		}
		t->next = ad_nod;

		return (ad_nod);
	}
}
