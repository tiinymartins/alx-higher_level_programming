#include "lists.h"
/**
 * check_cycle - function in C that checks if a singly linked list has a cycle
 * @list: pointer
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */

int check_cycle(listint_t *list)
{
	listint_t *ment, *previous;

	if (list == NULL || list->next == NULL)
		return (0);
	ment = list;
	previous = ment->next;

	while (ment != NULL && previous->next != NULL && previous->next->next != NULL)
	{
		if (ment == previous)
			return (1);
		ment = ment->next;
		previous = previous->next->next;
	}
	return (0);
}
