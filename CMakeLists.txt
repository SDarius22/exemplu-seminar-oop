cmake_minimum_required(VERSION 3.27)
project(exemplu C)

set(CMAKE_C_STANDARD 11)

add_executable(exemplu main.c
        utils/bag.c
        utils/bag.h
        domain/dog.c
        domain/dog.h
        tests/tests.c
        tests/tests.h
        validation/dog_validator.c)
