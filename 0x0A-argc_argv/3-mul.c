#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - print sum of arguments passed into program
 * @argc: integer argument
 * @argv: pointer to char argument
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
