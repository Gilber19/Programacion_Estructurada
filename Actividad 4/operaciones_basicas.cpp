// Diarte Salas Gilberto 360954
// 03-09-2023
// Programa en C que use un menú para realizar las 4 operaciones básicas...
// DSG_ACT4_1_932

#include <stdio.h>

int main ()
{
    int num1,num2,oper;
    float result;
    printf("1.- Suma\n");
    printf("2.-Resta\n");
    printf("3.-Multiplicacion\n");
    printf("4.-Division\n");
    printf("Que operacion desea hacer\n");
    scanf("%d",&oper);
    printf("Ingrese el primer numero\n");
    scanf("%d",&num1);
    printf("Ingrese el segundo numero\n");
    scanf("%d",&num2);

    if(oper==1)
    {
        result=num1+num2;
    }
    else
    {
        if(oper==2)
        {
            result=num1-num2;
        }
        else
        {
            if(oper==3)
            {
                result=num1*num2;
            }
            else
            {
                if(oper==4)
                {
                    result=num1/num2;
                }
                else
                {
                    printf("OPCION INVALIDA");
                }
            }
        }  
    }
    printf("El resultado de la operacion es %.2f",result);
    return 0;
}