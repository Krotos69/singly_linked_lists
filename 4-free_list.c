#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: pointer to the first node of the list
 * this funtion traverses the list and frees each node's allocated memory
  */

 void free_list(list_t *head)
{
	list_t *current;
	list_t *next_node;
	current = head;
	while (current != NULL)
	{
		next_node = current->next;
		free(current->str);
		free(current);
		current = next_node;
	} 
}
