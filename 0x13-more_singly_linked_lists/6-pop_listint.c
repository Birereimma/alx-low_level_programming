#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int data;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	current = *head;
	data = current->n;
	*head = current->next;
	free(current);

	return (data);
}


