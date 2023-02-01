#include "list.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 *  @head: pointer to the first node of the list
 *  @n: integer element to be added to new node
 *  Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->link = NULL;
	temp = *head;
	if (temp == NULL)
		*head = new_node;
	else
	{
		while (temp->link != NULL)
			temp = temp->link;
		temp->link = new_node;
	}
	return (*head);
}
