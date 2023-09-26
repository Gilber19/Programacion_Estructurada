// Diarte Salas Gilberto
// 23-09-2023 25-09-2023
// Actividad 7 parte 2
// DSG_ACT7-2__RP07_PE

#include <stdio.h>
#include <stdlib.h>
// prototipo de funciones
int msges();
void menu();
void mayus(char cadena[]);
void minus(char cadena[]);
void capital(char cadena[]);
int contador(char cadena[]);
void alreves(char cadena[]);
void copia_Sin_Espacios(char cadena[]);
void cadena_valida(char cadena[]);
void cadena_mixta(char[]);
void palindromo(char cadena[]);
int main()
{
    menu();
    return 0;
}
int msges()
{
    int opc; // menu de opciones para moodificar una cadena
    printf(" M E N U \n");
    printf("1.- Convertir a MAYUSCULAS\n");
    printf("2.- Convertir a minisculas\n");
    printf("3.- Convertir a Capital\n");
    printf("4.- Contar caracteres\n");
    printf("5.- Organizar inversamente\n");
    printf("6.- Copiar sin espacios\n");
    printf("7.-Cadena, solo caracteres validos\n");
    printf("8.-Cadena mixta \n");
    printf("9.-Palindromo\n");
    printf("Que salida desea utilizar?\n");
    scanf("%d", &opc);
    return opc;
}
void menu()

{
    int opc;
    opc = msges(); // asiganacion del valor retornado de msges()
    char cadena[50];
    printf("Ingresa una palabra\n");
    fflush(stdin); // elimina el bufer
    gets(cadena);  // obencion de la cadena
    switch (opc)   // ingreso de opcion a realizar
    {
    case 1:
        mayus(cadena);
        break;
    case 2:
        minus(cadena);
        break;
    case 3:
        capital(cadena);
        break;
    case 4:
        contador(cadena);
        break;
    case 5:
        alreves(cadena);
        break;
    case 6:
        copia_Sin_Espacios(cadena);
        break;
    case 7:
        cadena_valida(cadena);
        break;
    case 8:
        cadena_mixta(cadena);
        break;
    case 9:
        palindromo(cadena);
        break;
    default:
        break;
    }
}
int contador(char cadena[]) // cuenta la cantidad de caracteres que hay en una cadena

{
    int i = 0;
    while (cadena[i] != '\0') // ciclo contador
    {
        i++;
    }
    // printf("la cantidad de caracteres es %d",i);
    return i;
}
void mayus(char cadena[]) // funcion qeu transforma a mayusculas

{
    int i;
    for (i = 0; cadena[i] != '\0'; i++) // cilco para cambiar cada caracter a mayuscula
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
    //printf("%s", cadena);
}
void minus(char cadena[]) // funcion que convierte cada caracter en minuscula

{
    int i;
    for (i = 0; cadena[i] != '\0'; i++) // ciclo para tranformar cada caracter en minuscula
    {
        if (cadena[i] >= 'A')
        {
            if (cadena[i] <= 'Z')
            {
                cadena[i] = cadena[i] + 32;
            }
        }
    }
    cadena[i] = '\0';
    //printf("%s", cadena);
}

void alreves(char cadena[])
{
    int i, j;
    i = contador(cadena);

    for (j = i - 1; j >= 0; j--)
    {
        char caracter = cadena[j];

        // Si el carácter es una letra minúscula, conviértelo a mayúscula
        if (caracter >= 'a' && caracter <= 'z')
        {
            caracter -= 32;
        }

        printf("%c", caracter);
    }
}
void capital(char cadena[]) // funcion para aplicar le formato capital

{
    int i = 0;
    int cap = 1; // Inicialmente, se capitaliza el primer caracter

    while (cadena[i] != '\0')
    {
        if (cadena[i] == ' ')
        {
            cap = 1; // Se capitaliza el siguiente caracter
        }
        else
        {
            if (cap)
            {
                if (cadena[i] >= 'a' && cadena[i] <= 'z')
                {
                    cadena[i] -= 32;
                }
                cap = 0;
            }
        }
        printf("%c", cadena[i]);
        i++;
    }
}

void copia_Sin_Espacios(char cadena[]) // funcion que imprime la cadena eliminando los espacios
{
    mayus(cadena);
    int i;
    for (i = 0; cadena[i] != '\0'; i++) // ciclo para elimar los espacios entre cada palabra ingresada
    {
        if (cadena[i] != ' ')
        {
            printf("%c", cadena[i]);
        }
    }
}
void cadena_valida(char cadena[])
{
    int i, j;
    mayus(cadena);
    char cadena2[30];

    j = 0;
    for (i = 0; cadena[i] != '\0'; i++)
    {
        if ((cadena[i] == ' ') || (cadena[i] >= 'a' && cadena[i] <= 'z') || (cadena[i] >= 'A' && cadena[i] <= 'Z')) // Esta condicion valida que sea alfabetico o espacios
        {
            if (cadena[i] != ' ' || (i > 0 && cadena[i + 1] != '\0' && cadena[i - 1] != ' ')) // Esto verifica el doble espaciado asi como el inicio y fin con el mismo
            {
                cadena2[j] = cadena[i];
                printf("%c", cadena2[j]);
                j++;
            }
        }
    }
}

void cadena_mixta(char cadena[]) // funcion que manda a llaar a las anteriores
{
    mayus(cadena);
    printf("\n%s", cadena);
    printf("\n\n");
    minus(cadena);
    printf("%s", cadena);
    printf("\n\n");
    capital(cadena);
    printf("\n\n");
    copia_Sin_Espacios(cadena);
    printf("\n\n");
    alreves(cadena);
    printf("\n");
}
void palindromo(char cadena[]) // funcion para detectar palindromos

{
    // Variables locales
    int i, inicio = 0, fin, largo = 0;
    char caracter;
    char cadenaM[30];

    // Crea una nueva cadena en mayusculas y sin espacios para comparar
    for (i = 0; cadena[i] != '\0'; i++)
    {
        caracter = cadena[i];

        // Verifica si es minuscula y convierte a mayuscula
        if (caracter >= 'a' && caracter <= 'z')
        {
            caracter -= 32;
        }

        // Verifica si no es un espacio ni un numero
        if (caracter != ' ' && !(caracter >= '0' && caracter <= '9'))
        {
            cadenaM[largo] = caracter;
            largo++;
        }
    }
    fin = largo - 1;

    // Verifica si la cadena es un palindromo
    while (inicio < fin)
    {
        // Compara los caracteres en los indices inicio y fin
        if (cadenaM[inicio] != cadenaM[fin])
        {
            printf("No es un palindromo");
            return;
        }

        inicio++;
        fin--;
    }

    printf("Si es un palindromo");
}