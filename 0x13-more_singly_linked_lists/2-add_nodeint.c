#include "custom_lists.h"

/**
 * custom_list_add_node - adds a new node at the beginning of a custom linked list
 * @head: pointer to the first node in the list
 * @data: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
CustomListNode *custom_list_add_node(CustomListNode **head, const int data)
{
    CustomListNode *new_node;

    new_node = malloc(sizeof(CustomListNode));
    if (!new_node)
        return (NULL);

    new_node->data = data;
    new_node->next = *head;
    *head = new_node;

    return (new_node);
}
