#include "lists.h"

/**
 * print_dlistint - prints all elements of a d linked list
 *
 * @h: variable, head of list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int cnt;
	cnt = 0;

	if (h == NULL)
		return (cnt);

	while (h->prev != NUL)
		h = h->next;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		cnt++;
		h = h->next;
	}

	return (cnt);
}
