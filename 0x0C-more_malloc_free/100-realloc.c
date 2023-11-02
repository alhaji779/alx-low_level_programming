#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - function to reallocate mem
 * @ptr: pointer args
 * @old_size: size of ptr mem
 * @new_size: new size of ptr mem
 *
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *prta;
	char *old_prta;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	prta = malloc(new_size);
	if (!prta)
		return (NULL);

	old_prta = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			prta[i] = old_prta[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			prta[i] = old_prta[i];
	}

	free(ptr);
	return (prta);
}
