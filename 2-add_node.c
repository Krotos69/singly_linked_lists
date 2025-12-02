#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to the pointer to the head of the list_t list
 * @str: string to be added to the new node
 * Return: address of the new element, or NULL if it failed
 */
 
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node; /* Pointer to the new node */

	new_node = malloc(sizeof(list_t)); /* Allocate memory for the new node */
	if (new_node == NULL) /* Check if memory allocation was successful */
		return (NULL);

	new_node->str = strdup(str); /* Duplicate the string into the new node */
	if (new_node->str == NULL) /* Check if string duplication was successful */
	{
		free(new_node); /* Free the allocated memory for the node */
		return (NULL);
	}

	new_node->len = strlen(str); /* Set the length of the string */
	new_node->next = *head; /* Point the new node to the current head */
	*head = new_node; /* Update the head to point to the new node */

	return (new_node); /* Return the address of the new element */
}
