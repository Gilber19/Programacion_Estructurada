// Diarte Salas Gilberto 360954
// 26-08-2023
// Algoritmo que lea 3 números y desplegar cuál número es del medio y su valor
// DSG_ACT1_8_932

# include <stdio.h>

int main ()
{
    int num1,num2,num3;

    printf("escribe el primer numero");
    scanf("%d",& num1);
    printf("escribe el segundo numero");
    scanf("%d",& num2);
    printf("escribe el tercer numero");
    scanf("%d",& num3);

    if((num1>num2 && num1<num3)||(num1<num2&&num1>num3))
    {
        printf("El numero del medio es %d", num1);
    }
    
    else
    {
        if((num2>num3&& num2<num1)||(num2<num3&&num2>num1))
        {
            printf("El numero del medio es %d",num2);
        }
        else
        {
            printf("El numero del medio es %d",num3);
        }
    }
    


    return 0;
}