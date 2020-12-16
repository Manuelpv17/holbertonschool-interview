#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

listint_t *insert_node(listint_t **head, int number)
{
    listint_t *new_node = NULL;
    listint_t *aux = NULL;

    if (head == NULL || *head == NULL)
        return (NULL);

    new_node = malloc((sizeof(listint_t) * 1));
    if (new_node == NULL)
        return (NULL);

    new_node->n = number;

    if ((*head)->n >= number)
    {
        new_node->next = (*head);
        *head = new_node;
        return (*head);
    }

    aux = *head;
    while (aux->next != NULL)
    {
        if (aux->next->n >= number)
        {
            new_node->next = aux->next;
            aux->next = new_node;
            return (new_node);
        }
        aux = aux->next;
    }

    new_node->next = NULL;
    aux->next = new_node;

    return (new_node);
}