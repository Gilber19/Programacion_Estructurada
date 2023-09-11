// Diarte Salas Gilberto 360954
// 10-09-2023
// menu de opciones usando estructuras de control repetitivas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 35 // contante para generar N numeros aleatorios

// Prototipo de fucniones
int msges();
void menu();
void numeros(void);
void aleatorios(void);
void aleat_Mym(void);
void tablas(void);

int main()
{
    menu();
    return 0;
}

int msges()
{
    int opc;
    system("CLS");                // esta instruccion limpia la pantalla despues de ingresar una opcion.
    printf(" M E N U\n");
    printf("1.-Numeros ordenados\n");
    printf("2.-Numeros aleatorios pares e impares\n");
    printf("3.-Numeros aleatorios, mayor y menor\n");
    printf("4.-Tablas de multiplicar 1-20\n");
    printf("0.-Salir\n");
    printf("Elige una opcion\n");
    scanf("%d", &opc);

    return opc; // opcion para el menu
}

void menu()
{
    int opc; // valor obetenido de la funcion imges().
    do
    {
        opc = msges();
        switch (opc)
        {
        case 1:
            numeros();
            break;
        case 2:
            aleatorios();
            break;
        case 3:
            aleat_Mym();
            break;
        case 4:
            tablas();
            break;

        default:
            break;
        }

    } while (opc != 0);
}

void numeros(void) // esta funcion despliega los numeros en orden 
{                  //descendente a partir de un numero que ingresa el usuario
    int num, i;
    system("CLS");
    printf("Ingresa un numero ");
    scanf("%d", &num);
    printf("Los numeros en orden descendente son\n");
    for (i = num; i >= 1; i--)
    {
        printf("%d\n", i);
    }
    system("PAUSE");
}
void aleatorios(void) // realiza 40 numeros aleatorios y despliega 
{                       //cuantos son par e impar, asi como las uma de ambos
    int num, count_par, count_impar, sum;
    srand(time(NULL));
    system("CLS");
    count_par = 0;
    count_impar = 0;
    sum = 0;
    for (int i = 0; i < 40; i++)
    {
        num = rand() % 201;

        if (num % 2 == 0)
        {
            printf("%d Par\n", num);
            count_par++;
        }
        else
        {
            printf("%d Impar\n", num);
            count_impar++;
        }
        sum = sum + num;
    }
    printf("los numeros pares en total son %d\n", count_par);
    printf("los numeros impares en total son %d\n", count_impar);
    printf("La suma de los numeros es %d\n", sum);
    system("PAUSE");
}
void aleat_Mym(void)    // a partir de una constante N se generan n numeros aleatorios
{                       // desplegando cual es el mayor y cual el menor.
    int i, num, mayor, menor;
    srand(time(NULL));
    system("CLS");
    menor = 200;
    mayor = 100;
    for (i = 0; i < N; i++)
    {
        num = rand() % 101 + 100;
        printf("%d\n", num);
        if (num > mayor)
        {
            mayor = num;
        }
        if (num < menor)
        {
            menor = num;
        }
    }
    fflush(stdin);
    printf("el numero mayor es %d\n", mayor);
    printf("el numero menor es %d\n", menor);
    system("PAUSE");
}
void tablas(void)   // Genera tablas de multiplicar a partir del dato ingresado por el ususario.
{
    int num, i, result;
    system("CLS");
    printf("Ingrese que tabla de multiplicar desea ver del 1-20\n");
    scanf("%d", &num);
    for (i = 1; i < 11; i++)
    {
        result = num * i;
        printf("%d X %d = %d\n", num, i, result);
    }
    system("PAUSE");
}