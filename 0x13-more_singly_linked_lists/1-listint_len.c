#include "custom_lists.h"

/**
 * custom_list_length - returns the number of elements in a custom linked list
 * @head: custom linked list of type CustomListNode to traverse
 *
 * Return: number of nodes
 */
size_t custom_list_length(const CustomListNode *head)
{
    size_t num = 0;

    while (head)
    {
        num++;
        head = head->next;
    }

    return (num);
}
