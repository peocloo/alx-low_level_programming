#include "main.h"

/**
 * int _abs(int) - function to compute absolute value of integer.
 * @int: argument for function
 * Return: integer 0;
 */
int _abs(int n)
{
	if (n < 0)
		n = n * (-1);
	else
		n = n;
	return (n);
}
