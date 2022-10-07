#include "list.h" // Include user header file
#include <stdio.h> // For printf
#include <stdlib.h> // For NULL

struct ll_node *ll_head(struct ll_node *node) {
    return node;
}

struct ll_node *ll_tail(struct ll_node *node) {
    if(node == NULL) {
        return NULL;
    } else {
        while(node->next != NULL) {
            node = node->next;
        }
        return node;
    }
}
int ll_size(struct ll_node *head) {
    if(head == NULL) {
        return 0;
    } else {
        int size = 1;
        while(head->next != NULL) {
            head = head->next;
            size++;
        }
        return size;
    }
}

struct ll_node *ll_find(struct ll_node *node, int value) {
    if(node == NULL) {
        return NULL;
    } else {
        
        while(node->next != NULL) {
            if(node->data == value) {
                return node;
            }
            node = node->next;
        }
        if(node->data == value) {
            return node;
        }
        return NULL;
    }
}

