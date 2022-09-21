#include "lists.h"

/**
 * insert_node - inserts a number a sorted list
 * @head: pointer to pointer to listint_t
 * @number: the data value of the new node
 *
 * Return: a pointer to the new node or NULL
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *current, *befprev, *prev;

	if (!head)
		return (NULL);
	prev = *head;
	befprev = NULL;
	while (prev != NULL)
	{
		if (number < prev->n)
		{
			current = malloc(sizeof(listint_t));
			if (!current)
				return (NULL);
			current->n = number;
			current->next = prev;
			if (prev == *head)
				*head = current;
			else
				befprev->next = current;
			return (current);
		}
		befprev = prev;
		prev = prev->next;
	}
	current = malloc(sizeof(listint_t));
	if (!current)
		return (NULL);
	current->n = number;
	current->next = NULL;
	if (befprev)
		befprev->next = current;
	else
		*head = current;
	return (current);
}

