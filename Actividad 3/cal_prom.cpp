// Diarte Salas Gilberto 360954
// 22-08-2023
//Algoritmo que lea 4 calificaciones de un alumno,
//calcular y desplegar el promedio acompañado de la leyenda APROBADO o REPROBADO
// DSG_ACT1_1_932

#include <stdio.h>
int main ()
{
    int cal1,cal2,cal3,cal4;
    float prom;
    printf("Ingrese la primer calificacion del alumno\n");
    scanf("%d",&cal1);
    printf("ingrese la segunda calificacion\n");
    scanf("%d",&cal2);
    printf("ingrese la tercer calificacion\n");
    scanf("%d",&cal3);
    printf("ingrese la cuarta calificacion\n");
    scanf("%d",&cal4);
    prom=(cal1+cal2+cal3+cal4)/4;

    if(prom>=60)
    {
        printf("APROBADO");

    }
    else
    {
        printf("REPROBADO");
    }

    return 0;
}