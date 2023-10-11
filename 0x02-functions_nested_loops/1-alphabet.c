#include "main.h"
/**
 * main - Entry point
 * Return: Always 0
 */
void print_alphabet(void)
{
	/*declare variable and initialize it with first member of the range*/
	char alphabet = 'a';

	/*check to see if value is the same as last character*/
	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
