#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: pointer to char,string to be printed between numbers
 * @n: number of integers passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
        unsigned int i;
        va_list args;

        va_start(args, n);

        for (i = 0; i < n; i++)
        {
                int x = va_arg(args, const unsigned int);

                if ((separator == NULL) || (i == (n-1)))
                {
                        printf("%d", x);
                }
                else
                {
                        printf("%d", x);
                        printf("%s", separator);
                }
        }
        printf("\n");

        va_end(args);
}
