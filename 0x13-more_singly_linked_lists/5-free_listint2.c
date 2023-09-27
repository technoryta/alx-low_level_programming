#include "lists.h"
/**
 * free_listint2 - frees up memory allocated for list and sets head to NULL
 * @head: the head node pointer
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	head = NULL;
}
