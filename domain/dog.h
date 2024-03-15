//
// Created by darius on 15/03/24.
//

#ifndef EXEMPLU_DOG_H
#define EXEMPLU_DOG_H
typedef struct {
    int id_dog;
    char* name;
    double value;
} dog;

dog* create_dog(int, char*, double);
void destroy_dog(dog*);
#endif //EXEMPLU_DOG_H
