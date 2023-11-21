#include "list.h"

/**
 * list_len - returns the number of elements
 * @h: argument of type pointer to struct
 * Return: unsigned int
 */
size_t list_len(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}
