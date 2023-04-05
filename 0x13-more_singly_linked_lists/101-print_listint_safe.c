#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *me, *you;
	size_t num = 1;

	if (head == NULL || head->next == NULL)
	{
		return (0);
	}
	me = head->next;
	you = (head->next)->next;

	while (you)
	{
		if (me == you)
		{
			me = head;
			while (me != you)
			{
				num++;
				me = me->next;
				you = you->next;
			}
			me = me->next;
			while (me != you)
			{
				num++;
				me = me->next;
			}
			return (num);
		}
		me = me->next;
		you = (you->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t num, index = 0;

	num = looped_listint_len(head);

	if (num == 0)
	{
		for (; head != NULL; num++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
		else
		{
			for (index = 0; index < num; index++)
			{
				printf("[%p] %d\n", (void *)head, head->n);
				head = head->next;
			}
			printf("-> [%p] %d\n", (void *)head, head->n);
		}
		return (num);
}

