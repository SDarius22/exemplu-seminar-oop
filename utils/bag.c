//
// Created by darius on 15/03/24.
//

#include <stdlib.h>
#include "bag.h"

bag* create_bag(int capacity){
    bag* b= (bag*)malloc(sizeof(bag));
    (*b).capacity = capacity;
    b->size = 0;
    b->elements = (TElem*)malloc(capacity * sizeof(TElem));
    return b;
}

int get_size(bag* b) {
    return b->size;
}

void destroy_bag(bag* b){
    free(b->elements);
    free(b);
}