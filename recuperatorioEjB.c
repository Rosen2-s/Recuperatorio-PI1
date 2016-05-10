/*  Ejercicio 4-b
    Pida 10 números por teclado, almacenelos en un array y muestre la suma.*/

#include<stdlib.h>
#include<stdio.h>

int array[10], i, sumaNumero, n =1;

int main ()
{

    printf("A continuación se le requerirá introducir 10 números enteros. Ingreselos uno a uno.\n");

    for (i=0; i<=9; i++)
    {
       printf("Ingrese el número %d:\n", n);
       scanf("%d", & array[i]);
       sumaNumero= sumaNumero + array[i];
       n++;

    }

    printf("%d\n", sumaNumero);

    return 0;
}
