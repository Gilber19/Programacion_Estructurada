// Diarte Salas Gilberto 360954
// 08-10-2023
// Libreria personal
// DSG_libreria_personal_932
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Declaracion del prototipo de funciones
int validacion(const char msj[], int ri, int rf);
void repetidos(int vect[], int n, int ri, int rf);
void ordenar(int vect[], int n);
int busq_sec(int vect[], int n, int num);
int validar_existencia(int matriz[4][4], int num);
void matriz4x4(int matriz[4][4], int num, int ri, int rf);
void impr_vector(int vector[], int n);
void impr_mat(int matriz[4][4]);

void ordenar(int vect[], int n)
{
    // Funcion para ordenar un vector de manera ascendente
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (vect[j] < vect[i])
            {
                temp = vect[i];
                vect[i] = vect[j];
                vect[j] = temp;
            }
        }
    }
}

int busq_sec(int vect[], int n, int num)
{
    // Funcion para buscar un numero en un vector y devolver su posicion (o -1 si no se encuentra)
    int i;
    for (i = 0; i < n; i++)
    {
        if (vect[i] == num)
        {
            return i;
        }
    }
    return -1;
}

int validacion(const char msj[], int ri, int rf)
{
    // Funcion para validar y obtener una entrada numerica del usuario dentro de un rango dado
    int num;
    char cadena[100];
    do
    {
        printf("%s", msj);
        fflush(stdin);
        gets(cadena);
        num = atoi(cadena);
    } while (num < ri || num > rf);

    return num;
}

void repetidos(int vect[], int n, int ri, int rf)
{
    // Funcion para llenar un vector con numeros aleatorios dentro de un rango sin repeticion
    int i, num, rango = (rf - ri + 1);
    for (i = 0; i < n; i++)
    {
        do
        {
            num = rand() % rango + ri;
        } while (busq_sec(vect, i, num) != -1);
        vect[i] = num;
    }
}

int validar_existencia(int matriz[4][4], int num)
{
    // Funcion para verificar si un numero ya existe en una matriz
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (matriz[i][j] == num)
            {
                return 1; // El numero ya existe
            }
        }
    }
    return 0; // El numero no existe
}

void matriz4x4(int matriz[4][4], int num, int ri, int rf)
{
    // Funcion para llenar una matriz de 4x4 con numeros aleatorios dentro de un rango sin repeticion
    int numeros_disponibles[16] = {0}; // Para rastrear los numeros disponibles
    int numeros_restantes = 16;        // Numero de numeros restantes por asignar

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            do
            {
                num = (rand() % (rf - ri + 1)) + ri;
            } while (validar_existencia(matriz, num) || numeros_disponibles[num - 1]);

            matriz[i][j] = num;
            numeros_disponibles[num - 1] = 1;
            numeros_restantes--;
        }
    }
}

void impr_vector(int vector[], int n)
{
    // Funcion para imprimir los elementos de un vector
    printf("Numeros del vector:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", vector[i]);
    }
    printf("\n");
}
// Funcion para imprimir una matriz de 4x4
void impr_mat(int matriz[4][4])
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // Imprimir un elemento de la matriz
            printf("%5d ", matriz[i][j]);
        }
        printf("\n"); 
    }
}
