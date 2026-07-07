#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "linked_list.h"

int main(){
    LinkedList spell_list;

    list_init(&spell_list);

    list_push_front(&spell_list, 15);


    return 0;
}
