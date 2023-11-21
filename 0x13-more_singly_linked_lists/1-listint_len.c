#include "lists.h"

/***
 * listint_len - returns the number of lelements of a list
 * @h: arg of type pointer
 *
 * Return: unsinged int
 */
size_t listint_len(const listint_t *h)
{
	size_t count_nodes = 0;

	while (h)
	{
		count_nodes++;
		h = h->next;
	}
	return (count_nodes);
}
