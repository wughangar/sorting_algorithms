#include "sort.h"

/**
 * insertion_sort_list - insertion algorthim function
 * @list: list to be sorted
 *
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *node, *curr;

	if (!list || !*list)
		return;

	for (node = (*list)->next; node; node = node->next)
	{
		curr = node;
		while (curr->prev && curr->prev->n > curr->n)
		{
			curr->prev->next = curr->next;

			if (curr->next)
				curr->next->prev = curr->prev;

			curr->next = curr->prev;
			curr->prev = curr->prev->prev;
			curr->next->prev = curr;

			if (curr->prev)
				curr->prev->next = curr;
			else
				*list = curr;

			print_list(*list);
		}
	}
}
