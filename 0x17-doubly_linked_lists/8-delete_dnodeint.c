#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: pointer to a pointer to the head of the doubly linked list
 * @index: index of the node to be deleted (starting from 0)
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int count = 0;

	/* If the list is empty, return -1 (failure) */
	if (*head == NULL)
		return (-1);

	/* If deleting the head (index 0) */
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	/* Traverse the list to find the position to delete the node */
	while (temp != NULL && count < index)
	{
		temp = temp->next;
		count++;
	}

	/*
	 * If the position to delete is beyond the end of the list,
	 * return -1 (failure)
	*/
	if (temp == NULL)
		return (-1);

	/* Adjust the links to skip the node to be deleted */
	if (temp->prev != NULL)
		temp->prev->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = temp->prev;

	free(temp);
	return (1); /* Deletion su.cceeded */
}
