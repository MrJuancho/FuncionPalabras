#ifndef FUNCIONPALABRAS_INVERSION_H
#define FUNCIONPALABRAS_INVERSION_H
#include <string.h>
#include <stdio.h>

void invert(char str[]){
    for (int i = strlen(str); i >= 0; i--) {
        printf("%c",str[i]);
    }
}

void revert(char str[]){
    for (int i = 0; i < strlen(str) ; ++i) {
        printf("%c",str[i]);
    }
}

#endif //FUNCIONPALABRAS_INVERSION_H
