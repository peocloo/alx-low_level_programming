#include "main.h"
/**
 * _isalpha - function that checks for an alphabet/
 * @c: integer argument for function
 * Return: integer 0.
 */

int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
		return (1);
	else
		return (0);
}
