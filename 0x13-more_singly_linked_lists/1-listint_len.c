#include "lists.h"

/**
 * listint_len - calculate size of a list
 * @h: pointer to a list
 *
 * Return: size of a list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
