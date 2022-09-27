#include "lists.h"
int *get_end(int, listint_t *);

/**
 * is_palindrome - checks if a list is a palindrome
 * @head: start of the list
 * Return: 0 if yes and 1 if not
 */
int is_palindrome(listint_t **head)
{
	int length = 0, limit, i, j, iter = 1, *check;
	listint_t *cnter = *head;

	if (*head == NULL || (*head)->next == NULL)
		return (1);
	while (cnter != NULL)
	{
		length++;
		cnter = cnter->next;
	}
	if (length % 2 == 0)
		limit = length / 2;
	else
		limit = (length / 2)  + 1;
	check = get_end(limit, *head);
	cnter = *head;
	j = limit;
	while (iter < limit)
	{
		i = cnter->n;
		if (i != check[j - 1])
		{
			/*printf("%d - i, %d - (j-1), %d - (limit - 1)\n", i, j -1, limit - 1);*/
			free(check);
			return (0);
		}
		iter++;
		length--;
		j--;
		if (iter != limit)
			cnter = cnter->next;
	}
	free(check);
	return (1);
}

/**
 * get_end - gets the other side of a palindrome
 * @limit: the length from behind
 * @h: the beginninof the list
 * Return: an integer
 */
int *get_end(int limit, listint_t *h)
{
	int i = 0, *endpoints;
	listint_t *curr = h;

	endpoints = malloc(sizeof(int) * (limit + 1));
	while (i < limit)
	{
		curr = curr->next;
		i++;
	}
	i = 0;
	if (curr != NULL)
	{
	while (i < limit)
	{
		endpoints[i] = curr->n;
		curr = curr->next;
		i++;
	}
	}
	else
		endpoints[i] = curr->n;
	return (endpoints);
}
