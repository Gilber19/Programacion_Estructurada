// Diarte Salas Gilberto 360954
// 26-08-2023
//Programa que sirva para calcular el salario semanal de un trabajador donde se obtiene...
// DSG_ACT1_10_932

#include <stdio.h>

int main ()
{
    int hrs,pago_hr,sal_norm,sal_ext,sal_tot;

    printf("Cauntas horas trabajo en la semana\n");
    scanf("%d",&hrs);
    printf("Cuanto se le paga por hora\n");
    scanf("%d",&pago_hr);
    sal_norm=40*pago_hr;
    if(hrs<41)
    {   
        sal_norm=hrs*pago_hr;
        sal_tot=sal_norm;
        sal_ext=0;
    }
    else
    {
        if(hrs>40 && hrs<50)
        {
            sal_ext=(hrs-40)*2;
            sal_tot=sal_ext+sal_norm;
        }
        else
        {
            if(hrs>49)
            {
            
                sal_ext=(18*pago_hr)+((pago_hr*3)*(hrs-49));
                sal_tot=sal_ext+sal_norm;
            }
        }
    }
    printf("Horas trabajadas %d\n",hrs);
    printf("salario por horas %d\n",pago_hr);
    printf("El sueldo normal es de %d\n",sal_norm);
    printf("El Salario extra es %d\n",sal_ext);
    printf("El salario total es %d\n",sal_tot);
    
    return 0;
}