#include "lists.h"

/**
 * listint_len -  returns the number of elements in a linked listint_t list
 * @h: pointer to the first node
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t elements = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		if (h->n != '\0')
			elements++;
		h = h->next;
	}
	return (elements);
}
