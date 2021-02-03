#include "sort.h"

/**
 * insertion_sort_list - sort a list with the insertion method
 * @list: list head
 *
 * Return: none
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *act, *m;

	if (!list)
		return;

	act = *list;

	while (act != NULL)
	{
		m = act;
		if (act->prev)
			while (m->prev)
			{
				if (m->prev->n > m->n)
				{
					m->prev->next = m->next;
					if (m->next)
						m->next->prev = m->prev;
					m->next = m->prev;
					m->prev = m->next->prev;
					m->next->prev = m;
					if (m->prev)
						m->prev->next = m;
					else
						*list = m;
				}
				else
					break;
				print_list(*list);
			}

		act = act->next;
	}
}
