#include "main.h"

/**
 * void rev_string(char *s);
 * @s: pointer to char argument
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j; 
	int len;
	char str[] = "";

	len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len = i;
	}	

	for (j = len; j >= 0; j--)
	{
		s[] += s[j];
	}
}
