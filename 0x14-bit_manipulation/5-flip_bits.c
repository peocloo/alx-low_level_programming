#include "main.h"

/**
 * flip_bits - eturns the number of bits you would need to flip
 * to get from one number to another.
 * @n: argu
 * @m: arg
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, count = 0;
	unsigned long int current_bit;
	unsigned long int other = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current_bit = other >> a;

		if (current_bit & 1)
			count++;
	}
	return (count);
}
