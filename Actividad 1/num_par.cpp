// Diarte Salas Gilberto 360954
// 22-08-2023
// Algoritmo que lea un número entero, y desplegar si el número es “PAR” o “IMPAR”
// DSG_ACT1_2_932

#include<stdio.h>

int main ()
{
    int num;
    printf("Ingrese un numero\n");
    scanf("%d",&num);
    num= num % 2;
    if(num>0)
    {
        printf("IMPAR");
    }
    else
    {
        printf("PAR");
    }

    return 0;
}