#include "main.h"

/**
 * _strlen - prints length of string
 * @s: pointer to char argument
 *
 * Return: int
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		++i;
	}
	return (i);
}
