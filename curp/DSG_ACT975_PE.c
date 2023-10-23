// DIARTE SALAS GILBERTO 360954
// 22-10-2023
// GENERAR CURP
// DSG_ACT9.75_PE
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include "gilberto.h"

#define T 1
#define F 0

void menu(void);
void gen_curp(void);
void datos(char nommbre[], char nombre2[], char ape_pat[], char ape_mat[], char dia[], char mes[], char anio[], char seexo[], int sex, int estdo, int day, int mess, int annio, char curp[]);
void fecha(int dia, int mes, int anio, char diaa[], char mess[], char annio[]);
void edos_mex(void);
void meses(void);
void inicia_curp(char apPat[], char apMat[], char nom[], char nom2[], char curp[]);
void curpFecha(char curp[], char dia[], char mess[], char anio[]);
void sexo(char curp[], char sex[]);
void estados(char curp[], int estad);
void cons(char curp[], char apPat[], char apMat[], char nom[], char nom2[]);
void ultimos_caract(char curp[], char anio[]);

int main()
{
    srand(time(NULL));
    menu();
    return 0;
}

void menu()
{
    int opc;

    do
    {
        system("CLS");
        printf("\t\nM E N U\n");
        printf("1. CURP\n"),
            printf("2. SALIR\n");
        opc = vali_num(1, 2, "SELECCIONA UNA OPCION\n", "NUMERO INVALIDO\n");

        switch (opc)
        {
        case 1:
            system("CLS");
            gen_curp();
            break;
        case 2:
            printf("\nGRACIAS...\n");
            break;
        }
    } while (opc != 2);
}

void gen_curp()
{
    int sex, day, month, year, state;
    char curp[19], apPat[30], apMat[30], name[20], name2[20], sday[10], smonth[10], syear[10], ssex[10];

    system("CLS");
    datos(name, name2, apPat, apMat, sday, smonth, syear, ssex, sex, state, day, month, year, curp);
    inicia_curp(apPat, apMat, name, name2, curp);
    curpFecha(curp, sday, smonth, syear);
    sexo(curp, ssex);
    cons(curp, apPat, apMat, name, name2);
    ultimos_caract(curp, syear);

    system("CLS");
    for (int i = 0; i < 18; i++)
    {
        printf("%c", curp[i]);
    }
    printf("\n");
    system("PAUSE");
}

void datos(char nom[], char nom2[], char apPat[], char apMat[], char dia[], char mes[], char anio[], char sexx[], int sex, int etdo, int diaa, int mess, int anioo, char curp[])
{
    int op;
    char prepos[19][5] = {"DA ", "DE ", "DI ", "DD ", "EL ", "LA ", "LE ", "MC ", "DAS ", "DEL ", "DER ", "DIE ", "LOS ", "LAS ", "LES ", "MAC ", "VAN ", "VON ", "Y "};

    op = vali_num(1, 2, "TIENE APELLIDO PATERNO\n1.- SI \n2.- NO\n", "OPCION INVALIDA\n");
    while (op == 1)
    {
        do
        {
            printf("\nAPELLIDO PATERNO: ");
        } while (validar_cad(apPat) == 1);
        op = 0;
    }
    quit_prepo(apPat, prepos);
    quit_prepo(apPat, prepos);
    quit_prepo(apPat, prepos);
    quita_espacio(apPat);
    validar_enie(apPat);
    system("CLS");

    op = vali_num(1, 2, "TIENE APELLIDO MATERNO\n1.-SI\n2.-NO\n", "OPCION INVALIDA, INGRESA 1 0 2\n");
    while (op == 1)
    {
        do
        {
            printf("\nAPELLIDO MATERNO: ");
        } while (validar_cad(apMat) == 1);
        op = 0;
    }
    quit_prepo(apMat, prepos);
    quit_prepo(apMat, prepos);
    quit_prepo(apMat, prepos);
    quita_espacio(apMat);
    validar_enie(apMat);

    system("CLS");
    do
    {
        printf("\nPRIMER NOMBRE: ");
    } while (validar_cad(nom) == 1);

    op = vali_num(1, 2, "TIENE OTRO NOMBRE \n1.- SI \n2.- NO\n", "OPCION INVALIDA, INGRESA 1 0 2\n");
    while (op == 1)
    {
        do
        {
            printf("\nOTRO(S) NOMBRE(S): ");
        } while (validar_cad(nom2) == 1);
        op = 0;
    }
    validar_enie(nom);
    validar_enie(nom2);
    quit_prepo(nom, prepos);
    quit_prepo(nom, prepos);
    quit_prepo(nom, prepos);
    quit_prepo(nom2, prepos);
    quit_prepo(nom2, prepos);
    quit_prepo(nom2, prepos);
    quita_espacio(nom);
    quita_espacio(nom2);
    validar_u(nom2);

    system("CLS");

    do
    {
        sex = vali_num(1, 2, "INGRESA TU SEXO\n1.-HOMBRE\n2.-MUJER\n", "OPCION INVALIDA, INVALIDA 1 0 2\n");
        itoa(sex, sexx, 10);
    } while (sex == 0);

    system("CLS");
    fecha(diaa, mess, anioo, dia, mes, anio);

    system("PAUSE");
    do
    {
        edos_mex();
        etdo = vali_num(1, 33, "INGRESA TU ESTADO DE NACIMIENTO: ", "OPCION INVALIDA, INGRESA UN NUMERO DEL 1 AL 33\n");
        estados(curp, etdo);
    } while (etdo == 0);
}

void fecha(int dia, int mes, int year, char sday[], char smonth[], char syear[])
{
    int biesto = F;

    printf("FECHA DE NACIMIENTO\n");
    year = vali_num(1900, 2023, "ANIO DE NACIMIENTO: ", "OPCION INVALIDA, INGRESA OTRO ANIO\n");
    system("CLS");
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        biesto = T;
    }

    meses();
    do
    {
        mes = vali_num(1, 12, "ELIGE EL NUMERO DE TU MES: ", "OPCION INVALIDA, INGRESA OTRO MES\n");

    } while (year == 2023 && mes > 10);

    system("cls");

    if (mes == 2)
    {
        if (biesto == T)
        {
            dia = vali_num(1, 29, "INGRESA EL DIA DE NACIMIENTO EN NUMERO: ", "OPCION INVALIDA, INGRESA OTRO DIA\n");
        }
        else
        {
            dia = vali_num(1, 28, "INGRESA EL DIA DE NACIMIENTO EN NUMERO ", "OPCION INVALIDA, INGRESA OTRO DIA\n");
        }
    }
    else
    {
        if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
        {
            dia = vali_num(1, 30, "INGRESA TU DIA DE NACIMIENTO EN NUMERO: ", "OPCION INVALIDA, INGRESA OTRO DIA\n");
        }
        else
        {
            dia = vali_num(1, 31, "INGRESA TU DIA DE NACIMIENTO WN NUMERO: ", "OPCION INVALIDA, INGRESA OTRO DIA\n");
        }
    }

    itoa(dia, sday, 10);
    itoa(mes, smonth, 10);
    itoa(year, syear, 10);
    system("CLS");
}

void meses()
{
    system("cls");
    printf("1. ENERO\n");
    printf("2. FEBRERO\n");
    printf("3. MARZO\n");
    printf("4. ABRIL\n");
    printf("5. MAYO\n");
    printf("6. JUNIO\n");
    printf("7. JULIO\n");
    printf("8. AGOSTO\n");
    printf("9. SEPTIEMBRE\n");
    printf("10. OCTUBRE\n");
    printf("11. NOVIEMBRE\n");
    printf("12. DICIEMBRE\n");
}

void edos_mex()
{
    system("cls");
    printf("1. AGUASCALIENTES\t\t12. HIDALGO\t\t\t23. SAN LUIS POTOSÍ\n");
    printf("2. BAJA CALIFORNIA\t\t13. JALISCO\t\t\t24. SINALOA\n");
    printf("3. BAJA CALIFORNIA SUR\t\t14. ESTADO DE MÉXICO\t\t25. SONORA\n");
    printf("4. CAMPECHE\t\t\t15. MICHOACÁN\t\t\t26. TABASCO\n");
    printf("5. CHIAPAS\t\t\t16. MORELOS\t\t\t27. TAMAULIPAS\n");
    printf("6. CHIHUAHUA\t\t\t17. NAYARIT\t\t\t28. TLAXCALA\n");
    printf("7. COAHUILA\t\t\t18. NUEVO LEÓN\t\t\t29. VERACRUZ\n");
    printf("8. COLIMA\t\t\t19. OAXACA\t\t\t30. YUCATÁN\n");
    printf("9. DURANGO\t\t\t20. PUEBLA\t\t\t31. ZACATECAS\n");
    printf("10. GUANAJUATO\t\t\t21. QUERÉTARO\t\t\t32. CIUDAD DE MÉXICO\n");
    printf("11. GUERRERO\t\t\t22. QUINTANA ROO\t\t33. EXTRANJERO\n\n");
}

void inicia_curp(char apPat[], char apMat[], char nom[], char nom2[], char curp[])
{
    char iniciales[4];
    const char pnegadas[81][5] = {"BACA", "BAKA", "BUEI", "BUEY", "CACA", "CACO", "CAGA", "CAGO", "CAKA",
                                "CAKO", "COGE", "COGI", "COJA", "COJE", "COJI", "COJO", "COLA", "CULO",
                                "FALO", "FETO", "GETA", "GUEI", "GUEY", "JETA", "JOTO", "KACA", "KACO",
                                "KAGA", "KAGO", "KAKA", "KAKO", "KOGE", "KOGI", "KOJA", "KOJE", "KOJI",
                                "KOJO", "KOLA", "KULO", "LILO", "LOCA", "LOCO", "LOKA", "LOKO", "MAME",
                                "MAMO", "MEAR", "MEAS", "MEON", "MIAR", "MION", "MOCO", "MOKO", "MULA",
                                "MULO", "NACA", "NACO", "PEDA", "PEDO", "PENE", "PIPI", "PITO", "POPO",
                                "PUTA", "PUTO", "QULO", "RATA", "ROBA", "ROBE", "ROBO", "RUIN", "SENO",
                                "TETA", "VACA", "VAGA", "VAGO", "VAKA", "VUEI", "VUEY", "WUEI", "WUEY"};
    
    // Verifica la primera letra del apellido paterno
    iniciales[0] = (unsigned char)apPat[0] != 'Ñ' ? apPat[0] : 'X';
    
    // Verifica la primera vocal del apellido paterno
    iniciales[1] = busq_vocal(apPat);
    if (iniciales[1] == '/' || iniciales[1] == '-' || iniciales[1] == '.')
    {
        iniciales[1] = 'X';
    }

    // Verifica la primera letra del apellido materno
    iniciales[2] = apMat[0] == '\0' ? 'X' : apMat[0];
    
    // Verifica si el nombre es "JOSE" o "MARIA"
    if (strcmp(nom, "JOSE") == 0 || strcmp(nom, "MARIA") == 0)
    {
        iniciales[3] = nom2[0];
    }
    else
    {
        iniciales[3] = nom[0];
    }

    // Valida "J. J", "MA. MA", "JX", "MAX", "MA"
    if (strcmp(nom, "JX") == 0 || strcmp(nom, "MAX") == 0 || strcmp(nom, "MA") == 0)
    {
        iniciales[3] = nom2[0];
    }

    // Verifica que las 4 iniciales no estén en las palabras inconvenientes
    for (int i = 0; i < 81; i++)
    {
        int same = 0;
        for (int j = 0; j < 4; j++)
        {
            if (iniciales[j] == pnegadas[i][j])
            {
                same++;
            }
        }
        if (same == 4)
        {
            iniciales[1] = 'X';
            break;
        }
    }

    // Copia las iniciales al CURP
    for (int i = 0; i < 4; i++)
    {
        curp[i] = iniciales[i];
    }
}

void curpFecha(char curp[], char sday[], char smonth[], char syear[])
{
    int mes, dia;
    dia = atoi(sday);
    mes = atoi(smonth);

    curp[4] = syear[2];
    curp[5] = syear[3];

    if (mes < 10)
    {
        curp[6] = '0';
        curp[7] = smonth[0];
    }
    else
    {
        curp[6] = smonth[0];
        curp[7] = smonth[1];
    }

    if (dia < 10)
    {
        curp[8] = '0';
        curp[9] = sday[0];
    }
    else
    {
        curp[8] = sday[0];
        curp[9] = sday[1];
    }
}

void sexo(char curp[], char ssex[])
{
    if (ssex[0] == '1')
    {
        curp[10] = 'H';
    }
    else
    {
        curp[10] = 'M';
    }
}

void estados(char curp[], int estado)
{

    char iniEstado[33][3] = {"AS", "BC", "BS", "CC", "CS", "CH", "CL", "CM", "DG", "GT", "GR", "HG", "JC", "MC", "MN", "MS", "NT", "NL", "OC", "PL", "QT", "QR", "SP", "SL", "SR", "TC", "TS", "TL", "VZ", "YN", "ZS", "DF", "NE"};
    curp[11] = iniEstado[estado - 1][0];
    curp[12] = iniEstado[estado - 1][1];
}

void cons(char curp[], char apPat[], char apMat[], char name[], char name2[])
{
    curp[13] = busq_cons(apPat);
    curp[14] = busq_cons(apMat);

    if (strcmp(name, "MARIA") == 0 || strcmp(name, "JOSE") == 0)
    {
        curp[15] = busq_cons(name2);
    }
    else
    {
        if (strcmp(name, "MAX") == 0 || strcmp(name, "MA") == 0 || strcmp(name, "M") == 0 || strcmp(name, "JX") == 0 || strcmp(name, "J") == 0)
        {
            curp[15] = busq_cons(name2);
        }
        else
        {
            curp[15] = busq_cons(name);
        }
    }
}
void ultimos_caract(char curp[], char syear[])
{
    int year, n;
    char num[10];
    year = atoi(syear);
    if (year < 2000)
    {
        curp[16] = '0';
    }
    else
    {
        if (year < 2010)
        {
            curp[16] = 'A';
        }
        else
        {
            if (year < 2020)
            {
                curp[16] = 'B';
            }
            else
            {
                curp[16] = 'C';
            }
        }
    }
    n = rand() % 9 + 1;
    itoa(n, num, 10);
    curp[17] = num[0];
    curp[18] = '\0';
}