#include "lists.h"

/**
 * looped_listint_len - Counts the number of unique nodes
 * @head: constant arg of type pointer to struct
 * Return: size_t
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *x, *y;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	x = head->next;
	y = (head->next)->next;

	while (y)
	{
		if (x == y)
		{
			x = head;

			while (x != y)
			{
				nodes++;
				x = x->next;
				y = y->next;
			}
			x = x->next;

			while (x != y)
			{
				nodes++;
				x = x->next;
			}
			return (nodes);
		}
		x = x->next;
		y = (y->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - prints listint_t list safely
 * @head: const pointer to struct
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
