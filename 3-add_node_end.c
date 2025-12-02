#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: Double pointer to the head of the list_t list
 * @str: string to be duplicated and store in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */

 list_t *add_node_end(list_t **head, const char *str)

{
	list_t *new_node; /* Pointer to the new node */
	list_t *temp; /* Temporary pointer to traverse the list */

	new_node  = malloc(sizeof(list_t)); /* Allocate memory for the new node */
	if (new_node == NULL) /* Check if memory allocation was successful */
		{
			return (NULL);
		}
		new_node->str = strdup(str); /* Duplicate the string into the new node */
	if (new_node->str == NULL) /* Check if string duplication was successful */
	{
		free(new_node); /* Free the allocated memory for the node */
		return (NULL);
	}
	new_node->len = strlen(str); /* calcualte the length of the string */
	new_node->next = NULL; /* Set the next pointer of the new node to NULL */
	if (*head == NULL) /* If the list is empty, make the new node the head */
	{
		*head = new_node;
		return (new_node);
	}
	temp = *head; /* Initialize temp to the head of the list */
	while (temp->next != NULL) /* Traverse to the end of the list */
	{
		temp = temp->next;
	}
	temp->next = new_node; /* Link the last node to the new node */
	return (new_node); /* Return the address of the new element */
}
