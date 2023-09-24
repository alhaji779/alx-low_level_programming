#include <string.h>
#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_node - function to add node
 * @head: head
 * @str: string
 * Return: returns pointer of node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i = 0;

	while (str[i])
		i++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new->str = strdup(str);
		new->len = i;
		new->next = *head;

		*head = new;
	}

	return (new);
}
