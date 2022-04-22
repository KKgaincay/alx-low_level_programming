#include "lists.h"

/**
 * list_len - Finds the number of elements in
 *            a linked list_t list.
 * @h: The linked list_t list.
 * @elements: a counter var for size_t (nodes)
 *
 * Return: The number of elements in h.
 */
size_t list_len(const list_t *h)
{
	int x;

	for (x = 0; h != NULL; x++)
	{
		h = h->next;
	}
	return (x);
}
