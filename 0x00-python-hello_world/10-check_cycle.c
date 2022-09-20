#include "lists.h"

/**
 * check_cycle - checks for a loop/cycle in a listint_t
 * list
 *
 * @list: A pointer to the head of the listint_t to check.
 *
 * Return: 0 if there's no cycle and 1 if there is
 */
int check_cycle(listint_t *list)
{
	listint_t *slow, *fast;

	if (list == NULL || list->next == NULL)
		return (0);

	slow = list->next;
	fast = (list->next)->next;

	while (fast && fast->next)
	{
		if (slow == fast)
			return (1);

		slow = slow->next;
		fast = (fast->next)->next;
	}

	return (0);
}

