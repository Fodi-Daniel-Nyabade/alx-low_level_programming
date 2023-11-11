#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to a pointer to the head of the doubly linked list
 * @n: integer value for the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return NULL; /* Allocation failed */

	/* Set the value of the new node */
	new_node->n = n;
	new_node->prev = NULL;

	/* Link the new node to the current head, if any */
	if (*head != NULL)
		(*head)->prev = new_node;

	/* Update the head to point to the new node */
	new_node->next = *head;
	*head = new_node;

	return new_node;
}
