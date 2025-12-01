#include "lists.h"
#include <stdio.h>
/**
 * size_list - returns the numbers of elements of a list_t list
 * @h: pointer to the head of the list_t list
 * Return: the number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0; /*counter for nodes */

	while (h != NULL)

	{
		count++; /* Increment node counter */
		h = h->next; /*Move to the next node*/
	}
	return (count);
}
