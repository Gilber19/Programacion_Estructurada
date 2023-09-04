// Diarte Salas Gilberto 360954
// 23-09-2023
// Programa en C que sirva para desplegar el Total de una llamada telefónica...
// DSG_ACT4_5_932

#include <stdio.h>

int main  ()
{
    int min,tip_llam;
    float subtotal,iva,total;
    printf("Cuanto tiempo hablo por telefono\n");
    scanf("%d",&min);
    printf("Cual fue el tipo de llamada\n");
    printf("Ingrese 1 si es llamada local\n");
    printf("ingrese 2 si es llamada nacional\n");
    printf("ingrese cualquier tecla si es llamada internacional\n");
    scanf("%d",&tip_llam);
    if(tip_llam==1)
    {
        subtotal=3-(3*0.16);
        iva=3*0.16;
        total=3;
    
    }
    else
    {
        if(tip_llam==2)
        {
            if(min>3)
            {
                subtotal=(7+(min-3)*2)*0.84;
                iva=(7+(min-3)*2)*0.16;
                total=subtotal+iva;
            }
            else
            {
                subtotal=7*0.84;
                iva=7*0.16;
                total=subtotal+iva;
            }
        }
        else
        {
            if(min>2)
            {
                subtotal=(9+(min-2)*4)*0.84;
                iva=(9+(min-2)*4)*0.16;
                total=subtotal+iva;
            }
            else
            {
                subtotal=9*0.84;
                iva=9*0.16;
                total=subtotal+iva;
            }
        }
    }
    printf("Subtotal=%.2f\n",subtotal);
    printf("Iva=%.2f\n",iva);
    printf("Total=%.2f\n",total);



    return 0;
}
