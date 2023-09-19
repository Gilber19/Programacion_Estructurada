// Diarte Salas Gilberto 360954
// 18-09-2023
// Actividad 6 parte 2
// DSG_ACT6_RP06_PE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// prototipo de funciones
int msges();
int validar(char msges[], int inf, int sup);
void menu();
void calificaciones(void);
void tablas(void);
void numeros(void);
void embarcacion(void);
void recursar(void);

int main()
{
    menu(); 
    return 0;
}

int msges()
{
    system("CLS");
    int opc;
    printf("            MENU\n");                // despliegue de menu de opciones
    printf("1.-Alumnos con derecho a examen\n");
    printf("2.-Tablas de multiplicar\n");
    printf("3.-Numeros dentro de un rango\n");
    printf("4.-Embarcacion de los cabos\n");
    printf("5.-Recursar materia\n");
    printf("\nELIGE UNA OPCION\n");
    opc=validar("", 1, 5);
    return opc;
}

void menu() // switch para elegir que funcion utilizar 
{
    int opc;
    opc = msges();
    switch (opc)
    {
    case 1:
        calificaciones();
        break;
    case 2:
        tablas();
        break;
    case 3:
        numeros();
        break;
    case 4:
        embarcacion();
        break; 
    case 5:
        recursar();
        break;
    default:
        break;
    }
}

int validar(char msges[], int inf, int sup)// esta funcion nos valida la entrada de datos, para no deja lugar a errores en la ejecucion.

{
    int num;
    char cadena[100];
    do
    {
        printf("%s", msges);
        fflush(stdin); // limpia el bufer
        gets(cadena);
        num = atoi(cadena);
    } while (num < inf || num > sup); // condicion para evaluar el minimo y maximo de datos de entrada.
    return num;
}

void calificaciones()// esta funcion lee 5 calificaciones de 40 alumnos y despliega cuantos tienen derecho a recuperacion y cuantos no.

{
    int i, cal, derecho = 0, sinderecho = 0;
    float prom = 0;
    for (i = 1; i < 41; i++) // ciclo de 40 alumnos
    {
        for (int j = 1; j < 6; j++) //ciclo de 5 calificaciones
        {
            printf("Ingrese la calificacion del alumno %d de la unidad %d\n", i, j);
            cal = validar("", 0, 100); // validacion de datos
            prom += cal;
        }
        prom /= 5;
        if (prom < 50)
        {
            sinderecho += 1; // acumulador
        }
        else
        {
            derecho += 1; // acumulador de alumnos con derecho a recuperacion
        }
        system("CLS");
    }
    printf("La cantidad de alumnos con derecho a examen de nivelacion es de: %d\n", derecho);
    printf("La cantidad de alumnos sin derecho a examen de nivelacion es de: %d\n", sinderecho);
}

void tablas(void) // funcion que despliega las tablas de multiplicar del 1 al 10.
{
    int i, result;
    system("CLS"); //limmpia pantalla
    for (i = 1; i < 11; i++)
    {
        //system("CLS");
        printf("TABLA DEL %d\n", i);
        for (int j = 1; j < 11; j++) // ciclo para desplegar las tablas de multiplicar
        {
            result = i * j;
            printf("%d X %d = %d\n", i, j, result); // impresion del reultado
        }
        //system("PAUSE"); // esperar tecla
    }
}

void numeros() // permite ingresar n cantidad de numeros dentro de un rango dado para despues calcular su media.
{
    int num, inf, sup, i, acum = 0;
    float media;
    printf("Ingrese el numero menor de sus numeros\n");
    scanf("%d", &inf);
    printf("Ingrese el numero mayor de sus numeros\n");
    scanf("%d", &sup);
    for (i = inf; i <= sup; i++) // ciclo para ingresar numeros
    {
        printf("Ingresa un numero\n");
        num = validar("", inf, sup);
        acum += num;
    }
    media = (float)acum / (sup - inf + 1);
    printf("La suma de los numeros es %d \n", acum);
    printf("El promedio de los nuemros es %.2f\n", media); // despliegue de la media de los numero ingresados
}

void embarcacion() // verifca si una embarcacion puede zarpar dependiendo del peso y numero de pasajeros.


{
    int i, peso, acum = 0;
    float prom;
    for (i = 1; (acum < 806) && (i < 11); i++) // ciclo para iterar el numero de pasajeros y su peso
    {
        printf("Turista %d, cual es su peso?\n", i);
        peso = validar("", 0, 805);
        acum += peso;
    }
    i -= 1;
    prom = (float)acum / i; // utilizacion de float para poder desplegar un resultado con decimales
    printf("El promedio de los turistas es de %.2f\n", prom); // evaluacion de condiciones para desplegar el resultado obtenido
    if (i == 10 && acum<700)
    {
        printf("Se cumplio la condicion de maximo 10 pasajeros\n");
    }
    else
    {
        if(acum<806)
        {
            printf("cumple la condicion de peso\n");
        }
        else
        {
            printf("Excede la cantidad de peso, no zarpara\n");
        }
    }
}

void recursar() // despliega si un aluno debe repetir una materia y si queda dado de baja academica por un maximo de intentos.

{
    int cal, i, intentos = 0;
    float prom = 0;
    do
    {
        for (i = 1; i < 4; i++) // ciclo para ingresar calificacione parciales
        {
            printf("Ingresa la calificacion del parcial %d ", i);
            cal = validar("", 0, 100); // validadcion de datos de entrada
            prom += cal;
        }
        prom /= 3;
        intentos++;
        if (prom < 60) // condiciones para evaluar el resultado del alummno
        {
            if (intentos == 3)
            {
                printf("Baja academica\n");
            }
            else
            {
                printf("Repetir\n");
            }
        }
        else
        {
            printf("Aprobado\n");
        }
    } while (prom < 60 && intentos < 3); // condicion para seguir iterando el ciclo
}
