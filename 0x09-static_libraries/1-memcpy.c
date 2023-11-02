#include "main.h"

/**
 * _memcpy - copies memory
 * @dest: pointer to dest argument
 * @src: pointer to src argument
 * @n: unsigned interger argument, bytes
 *
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int k = n;

	for (i = 0; i < k; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
