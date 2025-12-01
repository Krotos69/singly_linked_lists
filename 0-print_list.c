#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list_t list
 *
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *h)

{
	size_t count = 0; /*counter for nodes */

	while (h != NULL)
	{
		/*If str is NULL, printf [0] (nil) */
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next; /*Move to the next node*/
		count++; /* Increment node counter */
	}
	return (count);
}
