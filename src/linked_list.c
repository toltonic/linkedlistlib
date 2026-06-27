#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void list_init(LinkedList *list){
    /*Initialize empty list
     * head should be NULL
     * size should be 0
     */
    list->size = 0;
    list->head = NULL;
}

int list_push_front(LinkedList *list, int value){
    /*Allocate a new node
     * Insert at beginning
     * update head
     * increment size
     * return 0 if malloc fails
     */
    list->size++;
    list->head 

    return 1;
}
