#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_list - function to free list
 * @head: head pointer
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *old;

	while (head != NULL)
	{
		old = head->next;
		free(head->str);
		free(head);
		head = old;
	}
}
