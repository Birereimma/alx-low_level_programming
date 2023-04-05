#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list and sets the head to NULL.
 * @h: A pointer to the head of the listint_t list.
 * Return: The size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *next;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}

	current = *h;
	*h = NULL;

	while (current != NULL)
	{
		count++;
		next = current->next;
		free(current);
		current = next;

		if (current == *h)
		{
			free(current);
			break;
		}
	}
	return (count);
}

