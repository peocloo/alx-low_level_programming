#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: const pointer to int
 * @n:const unsigned int arg
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		char *c = va_arg(args, char *);

		if (separator != NULL && i != n-1)
		{
			printf("%s", c);
			printf("%s", separator);
		}
		else if (c == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", c);
		}
	}
	printf("\n");
	va_end(args);
}
