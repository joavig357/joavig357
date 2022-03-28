#include <stdio.h>
void main (void){
    int billete1 =0;
    int billete5 =0;
    int billete10 =0;
    int billete20 =0;
    int billete50 =0;
    int billete100 =0;
    int plata=0;
    printf("Selecciona el monto:\n")
    scanf ("%d\n",&plata);
    if(plata<20){
        prinf("Error. El monto minimo es 20\n");
        return 1;
    }
    else if(plata>5000){
        printf("Error. El monto maximo es 5000\n");
        return 2;
    }
    else {
        printf("Monto aceptado!\n");
    }
    while(plata>=100){
        plata = plata-100;
        billete100 = billete100+1;
    }
    while(plata>=50){
        plata = plata-50;
        billete50 = billete50+1;
    }
    while(plata>=20){
        plata = plata-20;
        billete20 = billete20+1;
    }
    while(plata>=10){
        plata = plata-10;
        billete10 = billete10+1;
    }
    while(plata>=5){
        plata = plata = plata-5;
        billete5 = billete5+1;
    }
    while(plata>=1){
        plata = plata-1;
        billete1 = billete1+1;
    }
    printf("Billetes entregados\n");
    printf("Billetes de 100: %d\n", billete100);
    printf("Billetes de 50: %d\n", billete50);
    printf("Billetes de 20: %d\n", billete20);
    printf("Billetes de 10: %d\n", billete10);
    printf("Billetes de 5: %d\n", billete5);
    printf("Billetes de 1: %d\n", billete1);
    printf("Transacción completada\n");
}