#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "linked_list.h"

int main(){
    LinkedList spell_list;

    list_init(&spell_list);



    list_push_front(&spell_list, 21);

    int size2 = list_size(&spell_list);

    printf("%d\n", size2);




    list_pop_front(&spell_list);

    int size1 = list_size(&spell_list);

    printf("%d\n", size1);



    return 0;
}
