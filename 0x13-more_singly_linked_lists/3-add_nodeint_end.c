#include "custom_lists.h"

/**
 * custom_list_add_node_end - adds a node at the end of a custom linked list
 * @head: pointer to the first element in the list
 * @data: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
CustomListNode *custom_list_add_node_end(CustomListNode **head, const int data)
{
    CustomListNode *new_node;
    CustomListNode *temp = *head;

    new_node = malloc(sizeof(CustomListNode));
    if (!new_node)
        return (NULL);

    new_node->data = data;
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
        return (new_node);
    }

    while (temp->next)
        temp = temp->next;

    temp->next = new_node;

    return (new_node);
}
