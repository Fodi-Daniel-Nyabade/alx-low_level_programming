#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginnig of a list
 * @head: a pointer to the head node
 * @n: a parameter to the function
 * Return: the address of new element or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
