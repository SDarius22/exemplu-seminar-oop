//
// Created by darius on 15/03/24.
//

#include "dog.h"
#include <stdlib.h>
#include <string.h>

dog* create_dog(int _id_dog, char* _nume, double _value){
    dog* d = (dog*)malloc(sizeof(dog));
    d->id_dog = _id_dog;
    d->name = (char*)malloc(strlen(_nume) + 1);
    strcpy(d->name, _nume);
    d->value = _value;
    return d;

}

void destroy_dog(dog* d){
    free(d->name);
    free(d);
}