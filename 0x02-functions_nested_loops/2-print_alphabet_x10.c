#include "main.h"
/**
 *print_alphabet_x10- prints alphabets in lowercase 10x
 * Return: void;
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		/*declare variable and assign begining of alphabet*/
		char alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		i++;
	}
}
