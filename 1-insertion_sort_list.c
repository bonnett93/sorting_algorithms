#include "sort.h"

/**
 * insertion_sort_list - Sort a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 *
 * @list: The dlist to be sorted
 * Return: Don´t return
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *forward = NULL, *backward = NULL;

	if (list == NULL || *list == NULL)
		return;
	forward = (*list)->next;
	while (forward != NULL)
	{
		backward = forward;
		while (backward->prev != NULL)
		{
			if (backward->n < backward->prev->n)
			{
				if (backward->prev->prev != NULL)
					backward->prev->prev->next = backward;
				backward->prev->next = backward->next;
				backward->next = backward->prev;
				backward->prev = backward->next->prev;
				backward->next->prev = backward;
				if (backward->next->next != NULL)
					backward->next->next->prev = backward->next;
				if (backward->prev == NULL)
				{
					*list = backward;
					print_list(*list);
					break;
				}
				print_list(*list);
			}
			else
				break;
		}
		forward = forward->next;
	}
}
