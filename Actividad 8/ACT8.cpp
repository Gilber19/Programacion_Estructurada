// Diarte Salas Gilberto
// 01 de septiembre de 2023
// Actividad 8
// DSG_ACT8_1_932

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// prototipo de funciones

void menu(void);
int validacion(char mensj[], int ri, int rf);
void vect1(int vector1[]);
void vect2(int vector2[]);
void vect1_vect2(int vector3[], int vect2[], int vect1[]);
int num_repetido(int num, int i, int vector2[]);
void imprimir(int vect1[], int vect2[], int vect3[]);
void matriz_4x4(int matriz[][4], int vect1[], int vect2[]);
void impri_matr(int matriz[][4]);

int main()
{

    menu();

    return 0;
}
// Funcion menu, despliegue de opciones
void menu(void)
{
    srand(time(NULL));
    int vector1[10];
    int vector2[10];
    int vector3[20];
    int matriz[4][4];
    int opc;
    do
    {
        system("CLS");
        printf("  ---- MENU----\n\n");
        printf("1- Llenar VECTOR 1 (MANUAL)\n");
        printf("2- Llenar VECTOR 2 (ALEATORIO)\n");
        printf("3- Llenar VECTOR 3 (con VECTOR 1 y VECTOR 2)\n");
        printf("4- Imprimir Vectores\n");
        printf("5- Llenar Matriz 4x4\n");
        printf("6- Imprimir Matriz\n");
        printf("0- Salir\n");
        printf("Ingresa una opcion ");
        scanf("%d", &opc);
        system("CLS");

        switch (opc)
        {
        case 1: // llenar vector 1 manualmente
            vect1(vector1);
            system("PAUSE");
            break;
        case 2: // llenar vector 2 con numeros generados aletoriamente
            vect2(vector2);
            system("PAUSE");
            break;
        case 3: // llenar vector 3, con valores del vector 1 y vector 2
            vect1_vect2(vector3, vector2, vector1);
            system("PAUSE");
            break;
        case 4: // imprimir vectores
            imprimir(vector1, vector2, vector3);
            system("PAUSE");
            break;
        case 5: // llenar matriz de dimension 4x4
            matriz_4x4(matriz, vector1, vector2);
            system("PAUSE");
            break;
        case 6: // imprimir matriz 4x4
            impri_matr(matriz);
            system("PAUSE");
            break;
        default:
            if (opc != 0)
            {
                printf("Opcion invalida, intentalo de nuevo\n");
                system("PAUSE");
            }
            break;
        }
    } while (opc != 0);
    printf("Gracias, hasta la proxima\n");
}

// funcion para valida la entrada de datos por el usuario
int validacion(char mensj[], int ri, int rf)
{
    int num;
    char cadena[100];
    do
    {
        printf("%s", mensj);
        fflush(stdin);
        gets(cadena);
        num = atoi(cadena);

    } while (num < ri || num > rf);

    return num; //
}

// llenado del vector manualmente
void vect1(int vector1[])
{
    int num;
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("   Posicion [%d] del vector\n", i);
        num = validacion("Ingresa un numero entre 30 y 70: ", 30, 70);
        vector1[i] = num;
        system("CLS");
    }
}

//Funcion que verifica si el numero ya se encuentra en el vector
int num_repetido(int num, int i, int vector2[])
{
    for (int j = 0; j < i; j++)
    {
        if (num == vector2[j])
        {
            return 1; // si el numero ya esta en el vector retorna 1
        }
    }
    return 0; // si el numero no esta en el vector retorna 0
}

//llenar vector de manera aleatoria sin repetir numeros
void vect2(int vector2[])
{
    int num;
    int i;
    for (i = 0; i < 10; i++)
    {
        do
        {
            num = rand() % 20 + 1;
        } while (num_repetido(num, i, vector2));
        vector2[i] = num;
    }
    printf("El vector se ha llenado con exito\n");
}

//llenado de vector con datos de otros vectores
void vect1_vect2(int vector3[], int vect2[], int vect1[])
{
    for (int i = 0; i < 20; i++)
    {
        if (i < 10) // Se llenan las primeras 10 posiciones con el vector 1
        {
            vector3[i] = vect1[i];
        }
        else // se llenan las ultimas 10 posiciones con el vector 2
        {
            vector3[i] = vect2[i - 10];
        }
    }
    printf("Vector de 20 espacios completo exitosamente!\n");
}

// Funcion para imprimir los vectores
void imprimir(int vect1[], int vect2[], int vect3[])
{
    int i;
    printf("Vector 1\n");
    for (i = 0; i < 10; i++)
    {
        printf("Vector[%d]  %d\n", i, vect1[i]);
    }
    system("PAUSE");
    system("CLS");
    printf(" Vector 2\n");
    for (i = 0; i < 10; i++)
    {
        printf("Vector[%d]  %d\n", i, vect2[i]);
    }
    system("PAUSE");
    system("CLS");
    printf(" Vector 3\n");
    for (i = 0; i < 20; i++)
    {
        printf("Vector[%d]  %d\n", i, vect3[i]);
    }
}

//Funcion para llenar una matriz con 2 vectores
void matriz_4x4(int matriz[][4], int vect1[], int vect2[])
{
    int i, j, k = 0;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (k < 10) // Se llenan los primeros 10 espacios con el vector 1
            {
                matriz[i][j] = vect1[k];
            }
            else // Se llenan los ultimos 6 espacios con el vector 2
            {
                matriz[i][j] = vect2[k - 6];
            }
            k++;
        }
    }
    printf("La matriz 4x4 se lleno exitosamene!\n");
}

//Funcion para imprimir la matriz
void impri_matr(int matriz[][4])
{
    printf("\tMatriz 4x4\t\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}