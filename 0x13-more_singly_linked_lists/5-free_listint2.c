#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: a pointer to the head of the linked list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *current = *head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}

	*head = NULL;
}
