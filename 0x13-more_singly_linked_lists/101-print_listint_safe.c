#include "lists.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * print_listint_safe - Prints a listint_t linked list safely, avoiding loops.
 * @head: Pointer to the first element in the list.
 *
 * Return: The number of nodes in the list>
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head;
	const listint_t *fast = head;
	size_t count = 0;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;

		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			printf("-> [%p] %d\n", (void *)fast->next, fast->next->n);
			printf("Linked list has a loop\n");
			exit(98);
		}
	}
	return (count);
}
