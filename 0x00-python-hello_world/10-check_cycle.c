#include "list.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * check - check if list cycle
 * @l: pointer to list
 * Return: 1 or 0
 */

int check(listint_t *l)
{
	listint_t *s = l, *f = l;

	while (f && f -> next)
	{
		s = s->next;
		f = f->next->next;
		if (s == f)
			return(1);
	}
	return(0);
}
