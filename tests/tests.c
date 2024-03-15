//
// Created by darius on 15/03/24.
//
#include <stdio.h>
#include "tests.h"
#include "../domain/dog.h"
#include <assert.h>
#include <string.h>

void run_dog_create_tests();

void run_all_tests(){
    printf("Running tests...\n");
    run_dog_create_tests();
    printf("All tests passed!\n");
}

void run_dog_create_tests() {
    printf("Running dog create tests...\n");
    dog* d = create_dog(1, "Rex", 100.0);
    assert(d->id_dog == 1);
    assert(strcmp(d->name, "Rex") == 0);
    assert(d->value == 100.0);
    destroy_dog(d);
    printf("Dog create tests passed!\n");

}

