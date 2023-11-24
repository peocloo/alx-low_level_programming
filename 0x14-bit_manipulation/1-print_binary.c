#include "main.h"

/**
 * _pow - calculate (base ^ power)
 * @base: base
 * @power: power
 * Return: value
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned int i;
	unsigned long int n;

	n = 1;

	for (i = 1; i <= power; i++)
		n *= base;
	return (n);
}

/**
 * print_binary - prints the binary representation of a number.
 * @n: argument
 */
void print_binary(unsigned long int n)
{
	unsigned long int div, check;
	char flag;

	flag = 0;
	div = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (div != 0)
	{
		check = n & div;

		if (check == div)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
	}
}
