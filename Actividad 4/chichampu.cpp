// Diarte Salas Gilberto 360954
// 03-09-2023
// Programa en C que sirva para el juego del CHINCHAMPU (Piedra, Papel, Tijera)...(switch).
// DSG_ACT4_9_932

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
  int opc, opc_comp;
  srand(time(NULL));
  opc_comp = rand() % 3 + 1;
  printf("Menu de opciones\n");
  printf("1.- Piedra\n");
  printf("2.- Papel\n");
  printf("3.- Tijeras\n");
  printf("Ingrese una opcion\n");
  scanf("%d", &opc);
  //printf("%d",opc_comp);

  switch (opc) {
    case 1:
      if (opc != opc_comp) 
      {
        if (opc_comp == 3)
        {
          printf("Gana usuario\n");
        }
        else 
        {
          printf("Gana computadora\n");
        }
      } else 
      {
        printf("Empate\n");
      }
      break;

    case 2:
      if (opc != opc_comp) 
      {
        if (opc_comp == 1) 
        {
          printf("Gana usuario\n");
        } 
        else 
        {
          printf("Gana computadora\n");
        }
      } else 
      {
        printf("Empate\n");
      }
      break;

    case 3:
      if (opc != opc_comp) 
      {
        if (opc_comp == 2) 
        {
          printf("Gana usuario\n");
        } 
        else 
        {
          printf("Gana computadora\n");
        }
      } 
      else 
      {
        printf("Empate\n");
      }
      break;

    default:
      printf("Opcion invalida\n");
      break;
  }

  return 0;
}