// Diarte Salas Gilberto 360954
// 03-09-2023
// En la materia programación estructurada se aplican 5 exámenes, calcular el...
// DSG_ACT4_7_932

#include <stdio.h>


int main ()
{
    int cal1,cal2,cal3,cal4,cal5,cal_menor;
    float prom;

    printf("Ingrese la primer calificacion\n");
    scanf("%d",&cal1);
    printf("Ingrese la segunda calificacion\n");
    scanf("%d",&cal2);
    printf("Ingrese la tercer calificacion\n");
    scanf("%d",&cal3);
    printf("Ingrese la caurta calificacion\n");
    scanf("%d",&cal4);
    printf("Ingrese la quinta calificacion\n");
    scanf("%d",&cal5);

    cal_menor=cal1;
    if(cal2<cal_menor)
    {
        cal_menor=cal2;
    }
    if(cal3<cal_menor)
    {
        cal_menor=cal3;
    }
    if(cal4<cal_menor)
    {
        cal_menor=cal4;
    }
    if(cal5<cal_menor)
    {
        cal_menor=cal5;
    }
    prom=(cal1+cal2+cal3+cal4+cal5-(cal_menor))/4;
    printf("%.2f",prom);
    return 0;
}