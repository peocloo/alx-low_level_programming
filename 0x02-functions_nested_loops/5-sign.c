#include "main.h"
/**
 *print_sign - function that prints sign of number.
 *@n:int argument for function
 *Return: integer 0, 1 or -1.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
