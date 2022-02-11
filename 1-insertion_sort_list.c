#include "sort.h"

/**
 * insertion_sort_list - sorts a linked list with the Insert Sort algorithm
 * @list: double pointer to the list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *insert, *move;

	if (!list || !(*list) || !(*list)->next)
		return;

	insert = *list;
	while (insert)
	{
		move = insert;
		while (move->prev && move->n < move->prev->n)
		{
			move->prev->next = move->next;
			if (move->next)
			{
				move->next->prev = move->prev;
			}
			move->next = move->prev;
			move->prev = move->prev->prev;
			move->next->prev = move;
			if (!move->prev)
				*list = move;
			else
				move->prev->next = move;
			print_list(*list);
		}
		insert = insert->next;
	}
}
