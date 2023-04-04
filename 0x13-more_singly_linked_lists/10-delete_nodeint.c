#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete index
 * @head: pointer to the first node
 * @index: integer
 * Return: 1 if succeed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int j;

	if (*head == NULL)
	{
		return (-1);
	}

	current = *head;
	prev = NULL;

	for (j = 0; j < index; j++)
	{
		if (current == NULL)
		{
			return (-1);
		}
		prev = current;
		current = current->next;
	}
	if (prev == NULL)
	{
		*head = current->next;
	}
	else
	{
		prev->next = current->next;
	}
	free(current);

	return (1);
}
