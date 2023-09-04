// Diarte Salas Gilberto 360954
// 03-09-2023
// Programa en C que lea 6 números, desplegar el valor del número mayor.
// DSG_ACT4_3_932


#include <stdio.h>

int main ()
{
    int num1,num2,num3,num4,num5,num6,mayor;
    printf("Ingrese 6 numeros\n");
    scanf("%d\n%d\n%d\n%d\n%d\n%d",&num1,&num2,&num3,&num4,&num5,&num6);
    mayor=num1;
    if(num2>mayor)
    {
        mayor=num2;
    }
    if(num3>mayor)
    {
        mayor=num3;
    }
    if(num4>mayor)
    {
        mayor=num4;
    }
    if(num5>mayor)
    {
        mayor=num5;
    }
    if(num6>mayor)
    {
        mayor=num6;
    }
    printf("EL numero mayor es %d\n",mayor);
    return 0;
}