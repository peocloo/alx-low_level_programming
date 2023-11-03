#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to void arg
 * @old_size: unsigned int arg
 * @new_size: unsigned int arg
 *
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *n;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		n = malloc(new_size);
		if (n == NULL)
			return (NULL);
		return (n);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	n = malloc(new_size);
	if (n == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
	{
		n[i] = ((char *) ptr)[i];
	}
	free(ptr);
	return (n);
}
