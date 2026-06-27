#ifndef linked_list
#define linked_list

typedef struct{
    int data;
    struct Node *next;
} Node;

typedef struct{
    Node *head;
    int size;
} LinkedList;

void list_init(LinkedList *list);

#endif
