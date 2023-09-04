// Diarte Salas Gilberto 360954
// 03-09-2023
// Programa en C que sirva para el juego del CHINCHAMPU (Piedra, Papel, Tijera)...(anidacion)
// DSG_ACT4_8_932

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    int opc,opc_com;

    printf(" Ingrese una opcion\n\n");
    printf("1.- Piedra\n");
    printf("2.- Papel\n");
    printf("3.- Tijeras\n");
    scanf("%d",&opc);
    srand(time(NULL));
    opc_com= rand() % 3  + 1;
    //printf("%d",opc_com); para pruebas
    if(opc==opc_com)
    {
        printf("Empate");
    }
    else
    {
        if(opc==1)
        {
            if(opc_com==2)
            {
                printf("\nGana computadora");
            }
            else
            {
                printf("\nGana usuario");
            }
        }
        if(opc==2)
        {
            if(opc_com==1)
            {
                printf("\nGana usuario");

            }
            else
            {
                printf("\nGana computadora");
            }
        }
        if(opc==3)
        {
            if(opc_com==2)
            {
                printf("\nGana usuario");
            }
            else
            {
                printf("\nGana computadora");
            }
            
        }
    }
    return 0;
}