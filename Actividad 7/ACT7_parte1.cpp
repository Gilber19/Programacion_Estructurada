// Diarte Salas Gilberto
// 25-09-2023
// Actividad 7 parte 1
// DSG_ACT7-1_RP07_PE

#include <stdio.h>
// prototipo de funciones
int msges();
void menu();
int largo(char cadena[]);
void mayusculas(char cadena[]);
void alreves(char cadena[]);
void vertical(char cadena[]);
void vert_alreves(char cadena[]);
void elim_ultimo_caract(char cadena[]);
void alreves_elimina(char cadena[]);
void elim_primer_caract(char cadena[]);
void elim_primer_caracter(char cadena[]);
void consonantes(char cadena[]);
void vocales(char cadena[]);

int main()
{
    menu();
    return 0;
}
int msges() // menu que desoliega las opciones a realizar
{
    int opc;
    printf(" M E N U \n");
    printf("1.- Imprimir en mayusculas\n");
    printf("2.- Imprimir al reves\n");
    printf("3.- Imprimir verticalmente\n");
    printf("4.- Imprimir verticalmente en ordenado al reves\n");
    printf("5.- Imprimir, eliminando el ultimo caracter 1 a 1\n");
    printf("6.- Imprimir al reves, eliminando el primer caracter 1 a 1\n");
    printf("7.- Imprimir, eliminando el primer caracter 1 a 1\n");
    printf("8.- Imprimir al reves, elimindo el primer caracter 1 a 1\n");
    printf("9.- Imprimir solo consonantesn");
    printf("10.-Imprimir solo vocales\n");
    printf("Que salida desea utilizar?\n");
    scanf("%d", &opc);
    return opc;
}
void menu() // lectura de la cadena y asignacion del valor retornado de msges()
{
    int opc;
    opc = msges();
    char cadena[50];
    printf("Ingresa una palabra\n");
    fflush(stdin);
    gets(cadena);
    switch (opc) // opciones para modificar la cadena ingresada
    {
    case 1:
        mayusculas(cadena);
        printf("%s", cadena);
        break;
    case 2:
        alreves(cadena);
        break;
    case 3:
        vertical(cadena);
        break;
    case 4:
        vert_alreves(cadena);

        break;
    case 5:
        elim_ultimo_caract(cadena);
        break;
    case 6:
        alreves_elimina(cadena);
        break;
    case 7:
        elim_primer_caract(cadena);
        break;
    case 8:
        elim_primer_caracter(cadena);
        break;
    case 9:
        consonantes(cadena);
        break;
    case 10:
        vocales(cadena);
        break;
    default:
        break;
    }
}
int largo(char cadena[])// funcion qeu cuentas la cantidad de carrateres en la cadena

{
    int i = 0;
    while (cadena[i] != '\0')
    {
        i++;
    }
    return i;
}
void mayusculas(char cadena[]) // tranforma la cadena en mayusculas
{
    int i;
    for (i = 0; cadena[i] != '\0'; i++) // ciclo para transformar la cadena a mayusculas
    {
        if (cadena[i] >= 'a')
        {
            if (cadena[i] <= 'z')
            {
                cadena[i] = cadena[i] - 32;
            }
        }
    }
    cadena[i] = '\0';
}

void alreves(char cadena[]) // ordena al reves la cadena
{
    int j, i;
    mayusculas(cadena);
    i = largo(cadena);
    for (j = i - 1; j >= 0; j--) // ciclo para voltear la cadena
    {
        printf("%c", cadena[j]);
    }
}
void vertical(char cadena[])// ordena de manera vertical la cadena ingresada
{
    mayusculas(cadena);
    for (int i = 0; cadena[i] != '\0'; i++) // ciclo para imprimir los caracteres
    {
        printf("%c\n", cadena[i]);
    }
}
void vert_alreves(char cadena[]) // ordena la cadena en orden contraio y vertical

{
    int j, i;
    mayusculas(cadena);
    i = largo(cadena);
    for (j = i - 1; j >= 0; j--)
    {
        printf("%c\n", cadena[j]);
    }
}
void elim_ultimo_caract(char cadena[]) // vs elimminando el ultimo caracter de la cadena hasta que queda solo 1
{
    int i, j;
    mayusculas(cadena);
    for (i = largo(cadena); i >= 0; i--) // ciclos para tranformar la cadena
    {
        for (j = 0; j < i; j++)
        {
            printf("%c", cadena[j]);
        }
        printf("\n");
    }
}
void alreves_elimina(char cadena[]) // voltea la cadena y elimina el ultimo caracter sucesivamente
{
    int i, j;
    mayusculas(cadena);
    i = largo(cadena);
    for (i = 0; i <= largo(cadena); i++) // ciclo para organizar al reves la cadena 
    {
        for (j = largo(cadena); j >= i; j--) //ciclo para eliminar el ultimo caracter
        {
            printf("%c", cadena[j]);
        }
        printf("\n");
    }
}
void elim_primer_caract(char cadena[]) // elimina el primer caracter sucesivamente

{
    int i, j;
    mayusculas(cadena);
    largo(cadena);
    for (i = largo(cadena); i >= 0; i--) // ciclos para voltear la cadena y elimminar el primer caracter
    {
        for (j = largo(cadena) - i; j <= largo(cadena); j++)
        {
            printf("%c", cadena[j]);
        }
        printf("\n");
    }
}
void elim_primer_caracter(char cadena[]) // voltea la cadena y elimina el primer caracter sucesivamente

{
    // Variables
    int i, j;
    for (i = largo(cadena) - 1; i >= 0; i--) // ciclo para invertir la cadena y cambiar a mayusculas
    {
        for (j = i; j >= 0; j--)
        {
            if (cadena[j] >= 'a') 
            {
                if (cadena[j] <= 'z')
                {
                    cadena[j] = cadena[j] - 32;
                }
            }
            printf("%c", cadena[j]);
        }
        printf("\n");
    }
}
void consonantes(char cadena[])// funcion que solo imprime consonantes
{
    mayusculas(cadena);
    for (int i = 0; cadena[i] != '\0'; i++) // ciclo que tedecta vocales, para ignorarlas
    {
        if (cadena[i] != 'A' && cadena[i] != 'E' && cadena[i] != 'I' && cadena[i] != 'O' && cadena[i] != 'U')
        {
            printf("%c", cadena[i]);
        }
    }
}
void vocales(char cadena[])// funcion que solo imprime vocales
{
    mayusculas(cadena);
    for (int i = 0; cadena[i] != '\0'; i++) // ciclo que detecta si hay alguna vocal, para imprimirla
    {
        if (cadena[i] == 'A' || cadena[i] == 'E' || cadena[i] == 'I' || cadena[i] == 'O' || cadena[i] == 'U')
        {
            printf("%c", cadena[i]);
        }
    }
}