// Diarte Salas Gilberto 360954
// 12-09-2023
// Actividad 6 parte 1
// DSG_ACT6_RP06_PE

#include <stdio.h>
#include <stdlib.h>

// prototipo de funciones a utilizar
int msges();
int ciclo();
void menu();
void fibonacci(void);
void factorial(void);
void digitos(void);

int main()
{
    menu();
    return 0;
}

int msges() // despligue del menu de opciones

{
    system("CLS");
    int opc;
    printf("MENU\n");
    printf("1.-FIBOANACCI\n");
    printf("2.--FACTORIAL\n");
    printf("3.-DIGITOS\n");
    printf("Ingrese la opcion a realizar\n");
    scanf("%d", &opc);
    return opc; // retorno de valor para la funcion menu
}
int ciclo() // funcion para elegir un ciclo 
{
    int op;
    printf("CICLOS REPETITIVOS\n\t1.-FOR\n\t2.-WHILE\n\t3.-DO WHILE\n");
    printf("Con que ciclo desea trabajar\n");
    scanf("%d", &op);
    return op;
}
void menu() // menu con funciones
{
    int opc;
    opc = msges();
    switch (opc)
    {
    case 1:
        fibonacci();
        break;
    case 2:
        factorial();
        break;
    case 3:
        digitos();
        break;
    default:
        break;
    }
}
void fibonacci(void) // serie finonacci, despliega numeros al sumar el numero anterior con el siguiente
{
    int result = 0, ant = -1, sig = 1, num, i, op;
    op = ciclo();
    printf("Cuantas veces quiere mostrar fibonacci\n");
    scanf("%d", &num);
    switch (op)
    {
    case 1:
        for (i = 0; i < num; i++) // ciclo para el despligue de la serie con ciclo for
        {
            result = ant + sig;
            printf("%d ", result);
            ant = sig;
            sig = result;
        }
        break;
    case 2:
        while (i < num) // ciclo para el despligue de la serie con ciclo while
        {
            result = ant + sig;
            printf("%d ", result);
            ant = sig;
            sig = result;
            i++;
        }
        break;
    case 3:
        do           // ciclo para el despligue de la serie con ciclo do while
        {
            result = ant + sig;
            printf("%d ", result);
            ant = sig;
            sig = result;
            i++;
        } while (i < num);
        break;

    default:
        printf("Opcion invalida, intentalo de nuevo");
        break;
    }
}
void factorial(void) // calculo del factorial de un numero dado por el usuario
{
    system("CLS");
    int fact, i, num, op;
    op = ciclo();
    printf("De que numero desea su factorial ");
    scanf("%d", &num);
    fact = 1;
    i = 1;
    switch (op)
    {
    case 1:
        for (i = 1; i <= num; i++) // ciclo que despliega el factorial del numero ingresado con FOR
        {
            fact = fact * i;
        }
        break;
    case 2:
        while (i <= num)       // ciclo que despliega el factorial del numero ingresado con WHILE
        {
            fact *= i;
            i += 1;
        }
        break;
    case 3:
        do                      // ciclo que despliega el factorial del numero ingresado con DO WHILE
        {
            fact = fact * i;
            i += 1;
        } while (i <= num);
        break;

    default:
        printf("Opcion no valida, intentalo de nuevo\n");
        break;
    }
    printf("el factorial de %d es %d\n", num, fact);
}
void digitos(void) // cantidad de digitos en un numero dado
{
    int num, x, dig, op;
    op = ciclo();         // opcion retornada de la eleccion del ciclo a usar
    printf("Ingresa un numero ");
    scanf("%d", &num);
    x = 1;
    dig = 0;
    switch (op)
    {
    case 1:
        for (dig = 0; num >= x; dig++) // despliegue de la cantidad de digitos en el numero dado FOR
        {
            x = x * 10;
        }
        break;
    case 2:
        while (num >= x)  // despliegue de la cantidad de digitos en el numero dado WHILE
        {
            x *= 10;
            dig += 1;
        }
        break;
    case 3:
        do                   // despliegue de la cantidad de digitos en el numero dado DO WHILE
        {
            x *= 10;
            dig += 1;
        } while (num >= x);
        break;
    default:
        printf("opcion no valida, intantalo de nuevo");
        break;
    }
    printf("El %d tiene %d digitos", num, dig); // despliegue del resultado
}