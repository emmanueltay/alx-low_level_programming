#include "lists.h"

/**
 * free_listint -  frees a listint_t list
 * @head: pointer to the first node of the list
 * Returns: no value
 */

void free_listint(listint_t *head)
{
	listint_t *current_node;

	while ((current_node = head) != NULL)
	{
		head = head->link;
		free(current_node);
	}
}
