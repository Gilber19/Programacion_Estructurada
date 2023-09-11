// Diarte Salas Gilberto 360954
// 26-08-2023
// Algoritmo que lea 3 calificaciones calcule el promedio del alumno y desplegar:
//Si prom < 30 Repetir 
// Si prom >=30 y prom <60 extraordinario 
// Si prom >=60 y prom <70 suficiente 
//Si prom >=70 y prom <80 Regular 
//Si prom >=80 y prom <90 bien 
// Si prom >=90 y prom <98 muy bien 
//Si prom >=98 y prom <=100 excelente 
//Si prom >100 Error en promedio 
// DSG_ACT1_6_932
#include <stdio.h>

int main ()
{
    int cal1,cal2,cal3;
    float prom;

    printf("Ingrese la primer calificacion del alumno\n");
    scanf("%d",&cal1);
    printf("ingrese la segunda calificacion\n");
    scanf("%d",&cal2);
    printf("ingrese la tercer calificacion\n");
    scanf("%d",&cal3);
    prom=(cal1+cal2+cal3)/3;
    
    if(prom<30)
    {
        printf("Repetir");
    }
    else
    {
        if(prom>=30 && prom<60)
        {
            printf("Extraordinario");
        }
        else
        {
            if(prom>=60 && prom<70)
            {
                printf("Suficiente");
            }
            
            else
            {
                if(prom>=70 && prom<80)
                {
                    printf("Regular");

                }
                else
                {
                    if(prom>=80 && prom<90)
                    {
                        printf("Bien");
                    }
                    else
                    {
                        if(prom>=90 && prom<98)
                        {
                            printf("Muy Bien");
                        }
                        else
                        {
                            printf("Excelente");
                        }
                    }
                }
            }
        }
    }



    return 0;
}