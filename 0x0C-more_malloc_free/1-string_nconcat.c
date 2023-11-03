#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to char argu
 * @s2: pointer to char argu
 * @n: unsigned integer argu
 *
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	while (s1[i])
		i++;
	j = 0;
	while (s2[j])
		j++;
	if (n >= j)
		l = i + j;
	else
		l = i + n;

	s = malloc(sizeof(char) * l + 1);
	if (s == NULL)
		return (NULL);
	k = 0;
	while (k < l)
	{
		if (k <= i)
			s[k] = s1[k];
		if (k >= i)
		{
			s[k] = s2[j];
			j++;
		}
		k++;
	}
	s[k] = '\0';
	return (s);
}
