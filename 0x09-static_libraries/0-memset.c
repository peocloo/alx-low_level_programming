#include "main.h"

/**
 * _memset - fills block of memory with values
 * @s: pointer ro char argument
 * @b: char argument
 * @n: unsigned int argument, num of bytes
 *
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	int j;

	for (j = 0; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
