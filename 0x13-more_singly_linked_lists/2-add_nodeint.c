#include "list.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to the first node
 *  @n: integer n to add in a new node
 *  Return: address of the new element or NULL if it fails
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
		new_node->link = NULL;
	else
		new_node->link = *head;
	new_node->n = n;
	*head = new_node;
	return (*head);
}

