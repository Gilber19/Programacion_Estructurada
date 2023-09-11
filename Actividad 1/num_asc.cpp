// Diarte Salas Gilberto 360954
// 26-08-2023
// 6.- Programa en C que lea 3 números y despegarlos en forma ascendente (usar AND o OR)
// DSG_ACT1_9_932

#include <stdio.h>

int main ()
{

    int num1,num2,num3;

    printf("escribe el primer numero\n");
    scanf("%d",& num1);
    printf("escribe el segundo numero\n");
    scanf("%d",& num2);
    printf("escribe el tercer numero\n");
    scanf("%d",& num3);

    if(num1<num2 && num1<num3)
    {
        if(num3<num2)
        {
            printf("los numeros ordenados son \n%d\n%d\n%d\n",num1,num3,num2);
        }
        else
        {
            printf("los numeros ordenados son \n%d\n%d\n%d\n",num1,num2,num3);
        }
    }
    else
    {
        if(num2<num3 && num2<num1)
        {
            if(num1<num3)
            {
             printf("los numeros ordenados son \n%d\n%d\n%d\n",num2,num1,num3);   
            }
            else
            {
               printf("los numeros ordenados son \n%d\n%d\n%d\n",num2,num3,num1);    
            }
        }
        if(num3<num2&&num3<num1)
        {
            if(num2<num1)
            {
                printf("los numeros ordenados son \n%d\n%d\n%d\n",num3,num2,num1);  
            }
            else
            {
                printf("los numeros ordenados son \n%d\n%d\n%d\n",num3,num1,num2);
            }   
        } 
    }
    return 0;
}
