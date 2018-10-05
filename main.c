#include <stdio.h>
#include "inversion.h"

int main() {
    char palabra[100];
    int menu;
    do {
        printf("Ingresa una palabra para invertirla :");
        scanf("%s",&palabra);

        printf("Palabra inversa : ");
        invert(palabra);
        printf("\n");
        printf("Palabra Normal : ");
        revert(palabra);
        fflush(stdin);

        printf("\nPresiona Cualquier tecla para repetir presiona 0 para salir.\n");
        scanf("%d", &menu);
    }while(menu !=0);
    printf("MADE BY : Juan Carlos Calderon Davila");
    system("pause");

    return 0;
}