#include "custom_lists.h"

/**
 * custom_list_print - prints all the elements of a custom linked list
 * @head: custom linked list of type CustomListNode to print
 *
 * Return: number of nodes
 */
size_t custom_list_print(const CustomListNode *head)
{
    size_t num = 0;

    while (head)
    {
        printf("%d\n", head->data);
        num++;
        head = head->next;
    }

    return (num);
}

