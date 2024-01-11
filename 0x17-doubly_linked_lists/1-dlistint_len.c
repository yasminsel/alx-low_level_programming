#include "lists.h"

/**
 * dlistint_len - returns length
 * @h: addres
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
