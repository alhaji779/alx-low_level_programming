#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * free_listint - function to free a list
 * @head: head
 * Return: void
 *
 */
void free_listint(listint_t *head)
{
	listint_t *t;


	while (head)
	{
		t = head;
		free(head);
		head = t->next;
	}

}
