#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check_cycle - check if list cycle
 * @list: pointer to list
 * Return: 1 or 0
 */

int check_cycle(listint_t *list)
{
	listint_t *s = list, *f = list;

	while (f && f->next)
	{
		s = s->next;
		f = f->next->next;
		if (s == f)
			return (1);
	}
	return (0);
}
