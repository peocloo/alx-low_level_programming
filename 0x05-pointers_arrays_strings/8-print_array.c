#include "main.h"
#include <stdio.h>

/**
 * print_array -  prints n elements of array
 * @a: pointer to int argument
 * @n: interger argument
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (a[i] != a[n])
	{
		if (a[i] == a[n - 1])
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
		i++;
	}
	printf("\n");
}