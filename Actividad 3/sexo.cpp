// Diarte Salas Gilberto 360954
// 22-08-2023
// Algoritmo que a través de opciones (1.- HOMBRE 2.- MUJER ) preguntar al usuario
// cual es su SEXO y desplegar la leyenda “HOLA, ERES HOMBRE ”, “ HOLA, ERES MUJER”
// DSG_ACT1_4_932

#include<stdio.h>

int main ()
{
    int opc;
    printf("1.- HOMBRE");
    printf("2.- MUJER");
    printf("Ingresa la opcion de tu sexo\n");
    scanf("%d",& opc);
    if(opc==1)
    {
        printf("HOLA, ERES HOMBRE"); 
    }
    if(opc==2)
    {
      printf("HOLA, ERES MUJER");
    }
    else
    {
      printf("OPCION INCORRECTA");
    }
    

    return 0;
}