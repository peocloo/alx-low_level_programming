#include "main.h"

/**
 * _strlen - returns the length string
 * @s: pointer to char argument
 *
 * Return: integer
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
