#ifndef _LINKED_LIST_H_
#define _LINKED_LIST_H_

typedef struct node {
int data;
struct node *next;
} Node;

Node* ll_make_node(int data);

Node* ll_prepend(Node* head, int data);

Node* ll_insert_before(Node* head, Node* mark, int data);

Node* ll_find(Node* head, int data);

Node* ll_delete(Node* head, Node *node);

void ll_print(Node* head);

#endif