//
// Created by darius on 15/03/24.
//

#ifndef EXEMPLU_BAG_H
#define EXEMPLU_BAG_H

typedef int TElem;

typedef struct {
    int capacity;
    int size;
    TElem* elements;
} bag;

bag* create_bag(int);
int get_size(bag*);
void destroy_bag(bag*);

#endif //EXEMPLU_BAG_H
