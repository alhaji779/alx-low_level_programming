#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - funct to dup str
 * @str: string to copy
 * Return: char pointer
 */
char *_strdup(char *str)
{
	int i;
	int cnt = 0;
	char *ptrArry;

	if (str == NULL)
		return (NULL);

	while (str[cnt] != '\0')
		cnt++;

	ptrArry = malloc(sizeof(char) * cnt + 1);

	if (ptrArry == NULL)
		return (NULL);

	for (i = 0; i < cnt; i++)
		ptrArry[i] = str[i];

	return (ptrArry);

}
