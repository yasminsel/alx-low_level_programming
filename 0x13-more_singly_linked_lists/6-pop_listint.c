#include "lists.h"

/**
 * pop_listint - pops head node
 * @head: address of pointer
 *
 * Return: value of popped node
*/
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;

	if (!head || !*head)
		return (0);

	node = (*head)->next;
	n = (*head)->n;
	*head = node;
	return (n);
}
