#include "lists.h"

/**
 * dlistint_len - returns len of d linked list
 *
 * @h: head of list
 * Return: the len of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int cnt;

	cnt =  0;

	if (h == NULL)
		return (cnt);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		cnt++;
		h = h->next;
	}

	return (cnt);
}
