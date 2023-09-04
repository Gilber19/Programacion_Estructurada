// Diarte Salas Gilberto 360954
// 03-09-2023
// Programa en C que sirva para calcular el Total a pagar por consumo de agua...
// DSG_ACT4_6_932

#include <stdio.h>

int main()
{
    int m3;
    float subt,iva,total;

    printf("Cuanto metros cubicos consumio\n");
    scanf("%d",&m3);

    if(m3<5)
    {
        subt=(m3*50)*0.84;
        iva=(m3*50)*0.16;
    }
    else
    {
        if(m3<16)
        {
            subt=((200)+(m3-4)*8)*0.84;
            iva=((200)+(m3-4)*8)*0.16;
        }
        else
        {
            if(m3<51)
            {
                subt=((288)+(m3-15)*10)*0.84;
                iva=((288)+(m3-15)*10)*0.16;
            }
            else
            {
                subt=((288+10*35)+(m3-50)*11)*0.84;
                iva=((288+10*35)+(m3-50)*11)*0.16;
            }
        }
    }
    total=subt+iva;
    printf("%.2f",total);

    return 0;
}