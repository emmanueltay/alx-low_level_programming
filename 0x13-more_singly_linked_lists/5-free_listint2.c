#include "list.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the first node
 * Return: no value
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node, *temp;

	if (head != NULL)
	{
		current_node = *head;
		while ((temp = current_node) != NULL)
		{

			current_node = current_node->link;
			free(temp);
		}
		*head = NULL;
	}
}
