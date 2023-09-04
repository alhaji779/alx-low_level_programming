#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * strtow - string to words
 * @str: string to check
 * Return: return char value
 */
char **strtow(char *str)
{
    if (!str || !*str)
    {
        return (NULL);
    }

    int i;
    int j;
    int k;
    int len;
    int word_count = 0;
    char **words;


    for (i = 0; str[i]; i++)
    {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
	{
            word_count++;
        }
    }


    words = (char **)malloc((word_count + 1) * sizeof(char *));
    if (!words)
    {
        return (NULL);
    }

    int start = 0;
    int end = 0;
    int word_len;
    k = 0;
    for (i = 0; str[i]; i++)
    {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
	{
            start = i;
        }

        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
	{
            end = i;
            word_len = end - start + 1;
            words[k] = (char *)malloc(word_len + 1);

            if (!words[k])
	    {
                for (j = 0; j < k; j++)
		{
                    free(words[j]);
                }
                free(words);
                return NULL;
            }
            strncpy(words[k], str + start, word_len);
            words[k][word_len] = '\0';
            k++;
        }
    }

    words[word_count] = NULL;
    return (words);
}
