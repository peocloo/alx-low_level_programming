#include "main.h"

/**
 * _abs - function to compute absolute value of integer.
 * @n: argument for function
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
