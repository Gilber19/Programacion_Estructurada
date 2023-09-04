// Diarte Salas Gilberto 360954
// 03-09-2023
// Programa en C que use un menú para realizar conversiones de unidades de...
// DSG_ACT4_2_932

#include<stdio.h>


int main ()
{
    int opc;
    float unid,result;

    printf("CONVERSOR DE UNIDADES\n");
    printf("1.- cm a pulgadas\n");
    printf("2.- cm a pies\n");
    printf("3.- km a millas\n");
    printf("4.- pulgadas a cm\n");
    printf("5.- pies a cm\n");
    printf("6.- millas a km\n");
    printf("Ingrese que unidad desea convertir\n");
    scanf("%d",&opc);

    printf("ingrese la cantidad a convertir\n");
    scanf("%f",&unid);

    if(opc==1)
    {
        result=unid/2.54;
    }
    
    else
    {
        if(opc==2)
        {
            result=unid/30.48;
        }
        else
        {
            if(opc==3)
            {
                result=unid*1.609;
            }
            else
            {
                if(opc==4)
                {
                    result=unid*2.54;
                }
                else
                {
                    if(opc==5)
                    {
                        result=unid*30.48;
                    }
                    else
                    {
                        if(opc==6)
                        {
                            result=unid/1.609;
                        }
                        else
                        {
                            printf("OPCION INVALIDA");
                        }
                    }
                }
            }
        }
    }
    printf("El resultado de la conversion es %.2f",result);

    return 0;
}