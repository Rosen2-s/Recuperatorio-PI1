/* Ejercicio 4-a
    Muestre un menú con las opciones sumar, restar, multiplicar y dividir, el programa solicitará una opción,
    luego el ingreso de los dos números y realizará la tarea elegida.
    Se debe usar una función para mostrar el menú, pedir los datos en el main. También usar funciones para realizar los
    cálculos. */


#include <stdio.h>
#include <stdlib.h>

void imprimir();
void operaciones();

int opcion = 0;
float num1,num2;

void main()
{


    imprimir();
    operaciones();

}

void imprimir ()
{
        printf("1.- Sumar\n");
        printf("2.- Restar\n");
        printf("3.- Multiplicar\n");
        printf("4.- Dividir\n");
        printf("5.- Salir\n");
        printf("Indicar la opcion: ");
        scanf("%d", &opcion);

        if(opcion!=5 & opcion <=5)
        {
            printf("Introducir el primer numero: ");
            scanf("%f", &num1);
            printf("Introducir el segundo numero: ");
            scanf("%f", &num2);
        }

}

void operaciones()
{

    switch(opcion)
        {
            case 1: printf("Suma: %.2f\n", (num1+num2));break;
            case 2: printf("Resta: %.2f\n", (num1-num2));break;
            case 3: printf("Multiplicacion: %.2f\n", (num1*num2));break;
            case 4: printf("División: %.2f\n", (num1/num2)); break;
            case 5: break;
            case 6: if (opcion > 5)
                    {
                        printf("Valor incorrecto.\n");
                    }

        }

}

