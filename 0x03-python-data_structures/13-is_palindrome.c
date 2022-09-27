#include "lists.h"
int *get_end(int, listint_t *);

/**
 * is_palindrome - checks if a list is a palindrome
 * @head: start of the list
 * Return: 0 if yes and 1 if not
 */
int is_palindrome(listint_t **head)
{
	int length = 0, limit, i, iter = 1, *check;
	listint_t *cnter = *head;

	if (*head == NULL)
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
	while (iter < limit)
	{
		i = cnter->n;
		if (i != check[iter - 1])
			return (0);
		iter++;
		length--;
		if (iter != limit)
			cnter = cnter->next;
	}
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

	endpoints = malloc(sizeof(int) * limit);
	while (i < limit)
	{
		endpoints[i] = curr->n;
		curr = curr->next;
		i++;
	}
	return (endpoints);
}
