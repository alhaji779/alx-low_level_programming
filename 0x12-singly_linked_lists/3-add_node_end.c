#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - function
 * @head: head pointer
 * @str: string args
 * Return: address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *start, *f;
	int i = 0;

	while (str[i])
		i++;
	start = malloc(sizeof(list_t));
	if (start == NULL)
		return (NULL);
	start->str = strdup(str);
	start->len = i;
	start->next = NULL;
	if (strdup(str) == NULL)
	{
		free(start);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = start;
		return (start);
	}
	else
	{
		f = *head;
		while (f->next != NULL)
			f = f->next;
		f->next = start;
		return (start);
	}
}
