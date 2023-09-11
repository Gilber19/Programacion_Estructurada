// Diarte Salas Gilberto 360954
// 10-09-2023
// Menu con varios programas, usando funciones.
// DSG_PE_RP03_932

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// prototipo de funciones
int msges();
void menu();
void prom(void);
void chicham_anid(void);
void chicham_mult(void);
void num_medio(void);
void num_mayor(void);
void num_ascendentes(void);
void horoscopo(void);

// funcion main (principal)
int main()
{
  menu();

  return 0;
}

int msges()               // Desarrollo de las funciones
{
  int op;
  system("CLS");  // instruccion para pausar el programa y esperar a que el ususario presione una tecla
  printf("   M  E   N   U \n");
  printf("1.- promedio \n");
  printf("2.- chichampu anidado\n");
  printf("3.- chichampu multiple\n");
  printf("4.- numero del medio\n");
  printf("5.- numero mayor\n");
  printf("6.- numeros ascendentes \n");
  printf("7.- Horoscopo\n");
  printf("0.- Salir \n");
  printf("ESCOGE UNA OPCION: ");
  scanf("%d", &op);
  return op;
}

void menu()           //funcion menu, al elgir una opcion se manda a llamar a la funcion correspondiente
{
  int op;
  do
  {
    op = msges(); // opcion elegida en la funcion msges, dando el valor de entrada al switch.
    switch (op)
    {
    case 1:
      prom(); // funcion que genera el promedio de 3 calificaciones, y despliega el rendimeinto del alumno.
      break;
    case 2:
      chicham_anid(); // juego de piedra, papel o tijeras, con anidacion de if, se juega contra la computadora.
      break;
    case 3:
      chicham_mult(); // juego de piedra, papel o tijeras, con menu multiple, jugamos contra la computadora.
      break;
    case 4:
      num_medio(); // al ingresar 3 numeros, el programa despliega cual es el numero del medio.
      break;
    case 5:
      num_mayor(); // se ingresan 3 numeros, el programa despliega cual es el mayor de todos.
      break;
    case 6:
      num_ascendentes(); // al darle 3 numeros al programa, este nos los devolvera ordenados de menor a mayor.
      break;
    case 7:
      horoscopo(); // De acuerdo a tu mes y dia de nacimiento, se despliega tu signo zodiacal y tu horoscopo del dia.
      break;
    }

  } while (op != 0);
}

// FUNCIONES

void prom(void) // funcion promedio
{
  system("CLS");
  int cal1, cal2, cal3;
  float prom;

  printf("Ingrese la primer calificacion ");
  scanf("%d", &cal1);
  printf("Ingrese la segunda calificacion ");
  scanf("%d", &cal2);
  printf("Ingrese la tercer calficacion ");
  scanf("%d", &cal3);
  prom = (cal1 + cal2 + cal3) / 3;
  if (prom >= 80)
  {
    if (prom >= 98)
    {
      if (prom > 100)
      {
        printf("\nError en promedio\n");
      }
      else
      {
        printf("\nExcelente\n");
      }
    }
    else
    {
      if (prom >= 90)
      {
        printf("\nMuy bien\n");
      }
      else
      {
        printf("\nBien\n");
      }
    }
  }
  else
  {
    if (prom >= 60)
    {
      if (prom >= 70)
      {
        printf("\nRegular\n");
      }
      else
      {
        printf("\nSuficiente");
      }
    }
    else
    {
      if (prom >= 30)
      {
        printf("\nExtraordinario\n");
      }
      else
      {
        printf("\nRepetir\n");
      }
    }
  }

  system("PAUSE");
}
void chicham_anid(void)// piedra, papel o tijeras(if)
{
  //  VARIALES LOCALES
  system("CLS");
  int opc, opc_com;

  printf(" Ingrese una opcion\n\n");
  printf("1.- Piedra\n");
  printf("2.- Papel\n");
  printf("3.- Tijeras\n");
  scanf("%d", &opc);
  srand(time(NULL));
  opc_com = rand() % 3 + 1;
  // printf("%d",opc_com); para pruebas
  if (opc == opc_com)
  {
    printf("Empate");
  }
  else
  {
    if (opc == 1)
    {
      if (opc_com == 2)
      {
        printf("\nGana computadora\n");
      }
      else
      {
        printf("\nGana usuario\n");
      }
    }
    if (opc == 2)
    {
      if (opc_com == 1)
      {
        printf("\nGana usuario\n");
      }
      else
      {
        printf("\nGana computadora\n");
      }
    }
    if (opc == 3)
    {
      if (opc_com == 2)
      {
        printf("\nGana usuario\n");
      }
      else
      {
        printf("\nGana computadora\n");
      }
    }
  }
  
  system("PAUSE");
}
void chicham_mult(void)// piedra, papel o tijeras (switch)
{
  //  VARIALES LOCALES
  system("CLS");
  int opc, opc_comp;
  srand(time(NULL));
  opc_comp = rand() % 3 + 1;
  printf("Menu de opciones\n");
  printf("1.- Piedra\n");
  printf("2.- Papel\n");
  printf("3.- Tijeras\n");
  printf("Ingrese una opcion\n");
  scanf("%d", &opc);
  // printf("%d",opc_comp);

  switch (opc)
  {
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
    }
    else
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
    }
    else
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

  system("PAUSE");
}
void num_medio(void)// numero del medio
{

  //  VARIALES LOCALES
  system("CLS");
  int num1, num2, num3;
  printf("Ingrese el primer numero ");
  scanf("%d", &num1);
  printf("Ingrese el segundo numero ");
  scanf("%d", &num2);
  printf("Ingrese el tercer numero ");
  scanf("%d", &num3);

  if ((num1 > num2 && num1 < num3) || (num1 < num2 && num1 > num3))
  {
    printf("El numero del medio es %d \n", num1);
  }

  else
  {
    if ((num2 > num3 && num2 < num1) || (num2 < num3 && num2 > num1))
    {
      printf("El numero del medio es %d \n", num2);
    }
    else
    {
      printf("El numero del medio es %d \n", num3);
    }
  }

  system("PAUSE");
}
void num_mayor(void)//numero mayor

{
  //  VARIALES LOCALES
  system("CLS");
  int num1, num2, num3, mayor;
  printf("Ingrese el primer numero ");
  scanf("%d", &num1);
  printf("Ingrese el segundo numero ");
  scanf("%d", &num2);
  printf("Ingrese el tercer numero ");
  scanf("%d", &num3);

  if (num2 > num1 && num2 > num3)
  {
    mayor = num2;
  }
  else
  {
    if (num1 > num2 && num1 > num3)
    {
      mayor = num1;
    }
    else
    {
      mayor = num3;
    }
  }

  printf("El numero mayor es %d \n", mayor);
  system("PAUSE");
}
void num_ascendentes(void)//numeros ascendentes
{
  //  VARIALES LOCALES
  system("CLS");
  int num1, num2, num3;

  printf("escribe el primer numero\n");
  scanf("%d", &num1);
  printf("escribe el segundo numero\n");
  scanf("%d", &num2);
  printf("escribe el tercer numero\n");
  scanf("%d", &num3);

  if (num1 < num2 && num1 < num3)
  {
    if (num3 < num2)
    {
      printf("los numeros ordenados son \n%d\n%d\n%d\n", num1, num3, num2);
    }
    else
    {
      printf("los numeros ordenados son \n%d\n%d\n%d\n", num1, num2, num3);
    }
  }
  else
  {
    if (num2 < num3 && num2 < num1)
    {
      if (num1 < num3)
      {
        printf("los numeros ordenados son \n%d\n%d\n%d\n", num2, num1, num3);
      }
      else
      {
        printf("los numeros ordenados son \n%d\n%d\n%d\n", num2, num3, num1);
      }
    }
    if (num3 < num2 && num3 < num1)
    {
      if (num2 < num1)
      {
        printf("los numeros ordenados son \n%d\n%d\n%d\n", num3, num2, num1);
      }
      else
      {
        printf("los numeros ordenados son \n%d\n%d\n%d\n", num3, num1, num2);
      }
    }
  }
  system("PAUSE");
}
void horoscopo(void)//horoscopos
{
  int mes, dia;

  printf("1.-Enero\n2.-Febrero\n3.-Marzo\n4.-Abril\n5.-Mayo\n6.-Junio");
  printf("7.-Julio\n2.-Agosto\n9.-Septiembre\n10.-Octubre\n11.-Noviembre\n12.-Diciembre\n");
  printf("Ingresa tu mes de nacimiento en numero\n ");
  scanf("%d", &mes);
  printf("Ingresa tu dia de nacimiento\n");
  scanf("%d", &dia);
  if (dia <= 31 && mes <= 12)
  {
    switch (mes)
    {
    case 1:
      if (dia >= 20)
      {
        printf("Acuario: Cuida de tus amigos, pero recuerda que tu persona es lo mas importante");
      }
      else
      {
        printf("Capricornio: Estas a punto de hacer un descubrimiento en el amor maravilloso\n");
      }
      break;
    case 2:
      if (dia <= 28)
      {
        if (dia >= 19)
        {
          printf("Piscis: No caigas en la tentacion, todo tiene su tiempo\n");
        }
        else
        {
          printf("Acuario: Cuida de tus amigos, pero recuerda que tu persona es lo mas importante\n");
        }
      }
      else
      {
        printf("Febrero solo tiene 28 dias\n");
      }
      break;
    case 3:
      if (dia >= 21)
      {
        printf("Aries: En la vida todo tiene solucion, no desesperes\n");
      }
      else
      {
        printf("Piscis: No caigas en la tentacion, todo tiene su tiempo\n ");
      }
      break;
    case 4:
      if (dia >= 20)
      {
        printf("Tauro: Cuida bien los pasos que das, nunca oldices voltear atras\n");
      }
      else
      {
        printf("Aries: En la vida todo tiene solucion, no desesperes\n");
      }
      break;
    case 5:
      if (dia >= 21)
      {
        printf("Geminis: Eres arte y como arte debes valorarte como tal\n");
      }
      else
      {
        printf("Tauro: Cuida bien los pasos que das, nunca oldices voltear atras\n");
      }
      break;
    case 6:
      if (dia >= 21)
      {
        printf("Cancer: Vas a sufrir una dolorosa perdida, ten fuerza\n");
      }
      else
      {
        printf("Geminis: Eres arte y como arte debes valorarte como tal\n");
      }
      break;
    case 7:
      if (dia >= 23)
      {
        printf("Leo: Debes de moverte en lo financiero, nada cae del cielo\n");
      }
      else
      {
        printf("Cancer: Vas a sufrir una dolorosa perdida, ten fuerza\n");
      }
      break;
    case 8:
      if (dia >= 23)
      {
        printf("Virgo: Esta semana recibiras una noticia de alguien del pasado\n");
      }
      else
      {
        printf("Leo: Debes de moverte en lo financiero, nada cae del cielo\n");
      }
      break;
    case 9:
      if (dia >= 23)
      {
        printf("Libra: Una grta sorpresa tocara tu puerta este mes\n");
      }
      else
      {
        printf("Virgo: Esta semana recibiras una noticia de alguien del pasado\n");
      }
      break;
    case 10:
      if (dia >= 23)
      {
        printf("Escorpio: Nunca te olvides de las personas que te apoyaron, clave del exito\n");
      }
      else
      {
        printf("Libra: Una grta sorpresa tocara tu puerta este mes\n");
      }
      break;
    case 11:
      if (dia >= 22)
      {
        printf("Sagitario: Comienza todos tus dias con una sonrisa al mundo, te cambiara tu perspectiva\n");
      }
      else
      {
        printf("Escorpio: Nunca te olvides de las personas que te apoyaron, clave del exito\n");
      }
      break;
    case 12:
      if (dia >= 22)
      {
        printf("Capricornio: Estas a punto de hacer un descubrimiento en el amor maravilloso\n ");
      }
      else
      {
        printf("Sagitario: Comienza todos tus dias con una sonrisa al mundo, te cambiara tu perspectiva\n");
      }
      break;

    default:
      break;
    }
  }
  else
  {
    printf("Dia o mes INVALIDOS\n");
  }
  system("PAUSE");
}