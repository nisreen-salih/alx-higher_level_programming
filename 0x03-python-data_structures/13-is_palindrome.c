#include"lists.h"

/**
 *is_ palindrome - recursive
 *
 * @head: list head
 *
 * Return: 1 or 0
 */

int is_palindrome(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return (1);
	return (aux_palindrom(head, *hrad));
}

/**
 * aux_palindrom - know palindrom
 *
 * @head: list head
 * @end: list end
 */

int aux_palindrom(listint_t **head, listint_t *end)
{
	if (end == NULL)
		return (1);
	if (aux_palindrom(head, end->next) && (*head)->n == end->n)
	{
		*head = (*head->next);
		return (1);
	}
	return (0);
}
