#include "list.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @list: head of list
 * @str: value of element
 * Return: Address of new element
 */
List *add_node_end(List **list, char *str)
{
	List *last, *new_node = NULL;

	if (list == NULL)
		return (NULL);

	new_node = malloc(sizeof(List));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
		return (NULL);
	new_node->next = NULL;
	new_node->prev = NULL;

	if (!*list)
	{
		*list = new_node;
		new_node->next = new_node;
		new_node->prev = new_node;
	}
	else
	{
		last = (*list)->prev;
		last->next = new_node;
		(*list)->prev = new_node;
		new_node->prev = last;
		new_node->next = (*list);
	}
	return (new_node);
}

/**
 * add_node_begin - adds a new node at the beginning of a list
 * @list: head of list
 * @str: value of element
 * Return: Address of new element
 */
List *add_node_begin(List **list, char *str)
{
	List *last, *new_node = NULL;

	if (list == NULL)
		return (NULL);

	new_node = malloc(sizeof(List));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
		return (NULL);
	new_node->next = NULL;
	new_node->prev = NULL;

	if (!*list)
	{
		*list = new_node;
		new_node->next = new_node;
		new_node->prev = new_node;
	}
	else
	{
		last = (*list)->prev;
		last->next = new_node;
		(*list)->prev = new_node;
		new_node->prev = last;
		new_node->next = (*list);
		*list = new_node;
	}
	return (new_node);
}
