#include "list.h" // Include user header file
#include <stdio.h> // For printf
#include <stdlib.h> // For NULL

struct ll_node *ll_create(int data) {
    struct ll_node *head = malloc(sizeof(struct ll_node));
    head->data = data;
    head->next = NULL;
    return head;
}
void ll_destroy(struct ll_node *head) {
    struct ll_node* delete_node = NULL;
    while(head != NULL) {
        delete_node = head->next;
        free(head);
        head = delete_node;
    }
}

void ll_append(struct ll_node *list, int data) {
    if(list == NULL) {
        return;
    } else {
        struct ll_node* search_node = list;
        while(search_node->next != NULL) {
            search_node = search_node->next;
        }
        struct ll_node *new_node = malloc(sizeof(struct ll_node));
        new_node->data = data;
        new_node->next = NULL;
        search_node->next = new_node;
    }
}
struct ll_node *ll_delete(struct ll_node *head, int value) {
    struct ll_node* delete_node = head;
    if(head == NULL) {
        return NULL;
    } else if(head->data == value) {
        delete_node = head->next;
        free(head);
        return delete_node;
    } else {
        while(delete_node->next != NULL) {
            if(delete_node->next->data == value) {
                struct ll_node *temp = delete_node->next;
                delete_node->next = temp->next;
                free(temp);
                return head;
            }
            delete_node = delete_node->next;
        }
        return NULL;
    }
}
