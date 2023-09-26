#include "custom_lists.h"

/**
 * custom_list_free - frees a custom linked list
 * @head: CustomListNode list to be freed
 */
void custom_list_free(CustomListNode *head)
{
    CustomListNode *temp;

    while (head)
    {
        temp = head->next;
        free(head);
        head = temp;
    }
}
