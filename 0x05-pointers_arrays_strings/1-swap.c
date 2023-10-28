#include "main.h"

/**
 * swap_int - swaps interger pointed to
 * @a: pointer to int argument 1
 * @b: pointer to int argument 2
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
