#include "sort.h"
#include <stdio.h>

/**
 * insertion_sort_list - sorts a linked list with the Insert Sort algorithm
 * @list: double pointer to the list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *right, *left;

	if (!list || !(*list) || !(*list)->next)
		return;

	right = *list;
	while (right)
	{
		left = right;
		while (left->prev && left->n < left->prev->n)
		{
			left->prev->next = left->next;
			if (left->next)
			{
				left->next->prev = left->prev;
			}
			left->next = left->prev;
			left->prev = left->prev->prev;
			left->next->prev = left;
			if (!left->prev)
				*list = left;
			else
				left->prev->next = left;
			print_list(*list);
		}
		right = right->next;
	}
}
