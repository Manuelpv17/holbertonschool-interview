#include "lists.h"

/**
 * is_palindrome - checks if a singly linked list is a palindrome.
 * @head: head of the linked list
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */
int is_palindrome(listint_t **head)
{
	int length = 0, i = 0;
	listint_t *aux_head = *head;
	int *aux_array = NULL;

	if (head == NULL || *head == NULL)
		return (1);

	for (length = 0; aux_head != NULL; length++)
	{
		aux_head = aux_head->next;
	}

	if (length == 1)
		return (1);

	aux_array = malloc(sizeof(int) * length);

	aux_head = *head;
	for (i = 0; aux_head != NULL; i++)
	{
		aux_array[i] = aux_head->n;
		aux_head = aux_head->next;
	}

	for (i = 0; i < length; i++)
	{
		if (aux_array[i] != aux_array[length - 1 - i])
			return (0);
	}

	return (1);
}
