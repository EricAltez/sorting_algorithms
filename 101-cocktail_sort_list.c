#include "sort.h"

/**
 *cocktail_sort_list - sotrs list
 *@list: dll to be sorted
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *q, *r;
	int tmp;

	if (!list || !(*list) || !(*list)->next)
		return;

	q = *list;
	while (q != NULL)
	{
		r = q->next;
		while (r != NULL)
		{
			if (q->n > r->n)
			{
				tmp = q->n;
				q->n = r->n;
				r->n = tmp;
			}
			r = r->next;
		}
		q = q->next;
	}
}
