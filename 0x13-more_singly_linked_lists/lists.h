#ifndef CUSTOM_LISTS_H
#define CUSTOM_LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct CustomListNode - singly linked list node
 * @data: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for custom project
 */
typedef struct CustomListNode
{
    int data;
    struct CustomListNode *next;
} CustomListNode;

size_t custom_list_print(const CustomListNode *head);
size_t custom_list_length(const CustomListNode *head);
CustomListNode *custom_list_add_node(CustomListNode **head, const int data);
CustomListNode *custom_list_add_node_end(CustomListNode **head, const int data);
void custom_list_free(CustomListNode *head);
void custom_list_free_all(CustomListNode **head);
int custom_list_pop(CustomListNode **head);
CustomListNode *custom_list_get_node_at_index(CustomListNode *head, unsigned int index);
int custom_list_sum(const CustomListNode *head);
CustomListNode *custom_list_insert_at_index(CustomListNode **head, unsigned int idx, int data);
int custom_list_delete_at_index(CustomListNode **head, unsigned int index);
CustomListNode *custom_list_reverse(CustomListNode **head);
size_t custom_list_print_safe(const CustomListNode *head);
size_t custom_list_free_safe(CustomListNode **head);
CustomListNode *custom_list_find_loop(CustomListNode *head);

#endif

