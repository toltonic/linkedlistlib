#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "linked_list.h"

int main(){
    LinkedList lista;

    list_init(&lista);
    list_print(&lista);

    list_push_front(&lista, 24);
    list_print(&lista);

    list_push_back(&lista, 73);
    list_print(&lista);

    Node *node = list_find(&lista, 73);
    list_print(&lista);

    if(node == NULL){
        return 0;
    }

    list_insert_after(&lista, 24, 7);
    list_print(&lista);

    list_remove(&lista, 24);
    list_print(&lista);

    list_pop_front(&lista);
    list_print(&lista);

    list_clear(&lista);
    list_print(&lista);
    return 0;
}
