#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers
 * @min: integer arg
 * @max: integer argument
 *
 * Return: integer
 */
int *array_range(int min, int max)
{
	int *n, i = 0;

	if (min > max)
		return (NULL);
	n = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (n == NULL)
		return (NULL);
	while (min <= max)
	{
		n[i] = min;
		i++;
		min++;
	}
	return (n);
}
