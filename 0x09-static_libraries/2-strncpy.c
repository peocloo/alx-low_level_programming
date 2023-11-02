#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: pointer to char argument
 * @src: pointer to char arg
 * @n: integer arg
 *
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
