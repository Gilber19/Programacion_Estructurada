// Diarte Salas Gilberto
// 09-10-2023
// Actividad 9 
// DSG_ACT9_932

#include "gilberto_diarte.h" //libreria personal

int main()
{
    srand(time(NULL)); // Inicializar la semilla aleatoria
    int opc;
    int vector[15];
    int matriz[4][4];
    do
    {
        // Menu principal, solicita al usuario que seleccione una opcion
        do
        {
            printf(" \nM\tE\tN\tU\n\n");
            printf(" 1.-LLENAR VECTOR\n");
            printf(" 2.-IMPRIMIR VECTOR\n");
            printf(" 3.-LLENAR MATRIZ\n");
            printf(" 4.-IMPRIMIR MATRIZ\n");
            printf(" 5.-ORDENAR VECTOR\n");
            printf(" 6.-BUSCAR VALOR EN VECTOR\n");
            printf(" 0.-SALIR\n");
            printf(" \nINGRESE UNA OPCION A REALIZAR\n");
            opc = validacion("", 0, 6); // Solicitar una opcion valida al usuario
        } while (opc == '\0');          // Repetir si no se ingresa una opcion valida
        system("CLS");                  // Limpiar la pantalla

        // Inicia en la opcion seleccionada
        switch (opc)
        {
        case 1:
            // Llenar el vector con numeros aleatorios
            repetidos(vector, 15, 100, 200);
            printf("se ha llenado el vector\n");
            break;
        case 2:
            // Imprimir el vector
            impr_vector(vector, 15);
            break;
        case 3:
            // Llenar la matriz con numeros aleatorios
            matriz4x4(matriz, 16, 1, 16);
            printf("Se ha llenado la matriz\n");
            break;
        case 4:
            // Imprimir la matriz
            printf("Valores de la matriz:\n\n");
            impr_mat(matriz);
            break;
        case 5:
            // Ordenar el vector de manera ascendente
            ordenar(vector, 15);
            printf("el vector ha sido ordenado de manera ascendente\n");
            break;
        case 6:
            // Buscar un valor en el vector
            int num, num_encontrado;
            printf("que numero desea buscar en el vector\n");
            scanf("%d", &num);
            num_encontrado = busq_sec(vector, 15, num);
            if (num_encontrado != -1)
            {
                printf("El valor buscado se encuentra en el indice %d\n", num_encontrado + 1);
            }
            else
            {
                printf("El valor buscado no se encuentra en el vector.\n");
            }

            break;
        default:
            break;
        }
    } while (opc != 0); // Continuar hasta que se seleccione la opcion de salir
    return 0;
}
