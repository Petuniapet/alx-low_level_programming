#include "lists.h"
#include<stdio.h>

/**
 * free_listint_safe - frees a listint_t linked list safely, avoiding loops.
 * @h: Double pointer to the first element in the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *slow = *h;
	listint_t *fast = *h;
	size_t count = 0;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = *h;

			while (slow != fast)
			{
				*h = fast->next;
				free(slow);
				slow = *h;
				count++;
			}
			*h = NULL;
			free(fast);
			count++;
			return (count);
		}
	}
	while (*h != NULL)
	{
		listint_t *temp = *h;
		*h = (*h)->next;
		free(temp);
		count++;
	}
	return (count);
}
