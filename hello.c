#include <stdio.h>
int main(void) {    
    printf("Hola, cual es tu nombre?\n");
    char nombre[30];
    scanf("%s", nombre);
    printf("Hola %s,todo bien?", nombre);
    return (0) ;
}