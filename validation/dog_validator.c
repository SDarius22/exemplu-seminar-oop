//
// Created by darius on 15/03/24.
//


int validate_dog(dog* d){
    int err_code = 1;
    if(d->id_dog < 0){
        err_code *= 3;
    }
    if(d->value < 0){
        err_code *= 5;
    }
    if(strlen(d->name) == 0){
        err_code *= 7;
    }

    return err_code;
}