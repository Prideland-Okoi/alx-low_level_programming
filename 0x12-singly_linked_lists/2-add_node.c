#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @list_head: list_head of the linked list.
 * @str: string to store in the list.
 * Return: address of the list_head.
 */

list_t *add_node(list_t **list_head, const char *str)
{
	list_t *new;
	size_t nchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	new->len = nchar;
	new->next = *list_head;
	*list_head = new;

	return (*list_head);
}
