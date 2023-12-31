#include "lists.h"

/**
 * print_listin - prints all the elements of a list
 * @h: const arg of type
 * Return: unsigned int
 */
size_t print_listint(const listint_t *h)
{
	size_t count_nodes = 0;

	while (h)
	{
		count_nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count_nodes);
}
