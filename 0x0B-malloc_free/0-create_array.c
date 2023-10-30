#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/*
 * create_array - function to createptr array
 * @size: size of array
 * @c: char args
 * Return: char pointer
 */

char *create_array(unsigned int size, char c)
{
    char *ptrArry;
    unsigned int i;

    ptrArry = malloc(size * sizeof(char));
    if (size <= 0)
    {
        return (NULL);
    }

    if (ptrArry == NULL)
    {
        return (NULL);
    }

    for (i=0; i < size; i++)
        ptrArry[i] = c;


    return (ptrArry);
}
