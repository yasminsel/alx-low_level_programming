#include "lists.h"

/**
 * add_dnodeint - adds new head
 * @head: address
 * @n: int field
 *
 * Return: address
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
