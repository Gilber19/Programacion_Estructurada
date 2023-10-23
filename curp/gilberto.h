//**********************************LIBRERIA DE GILBERTO DIARTE SALAS*******************

int busq_Sec_Matric(int mat[][4], int m, int n, int num);
int busq_seq(int vect[], int n, int num);
int busq_vect_orden(int vect[], int n, int num);
void mayus(char cadena[]);
int busq_sec_ord(int vect[],int n, int num);
void minus(char cadena[]);
int vali_num(int ri, int rf, char msg[30], char msg2[30]);
void ordenar(int vect[], int n);
int num_aleat(int ri, int rf);
int validar_cad(char cadena[]);
int vali_alfa(char cadena[]);
int vali_espacio(char cadena[]);
void quita_espacio(char cad[]);
void validar_enie(char Cad[]);
char busq_vocal(char cad[]);
char busq_cons(char cad[]);
void validar_u(char cad[]);
void quit_prepo(char cadena[], char preposiciones[][5]);

int busq_vect_orden(int vect[], int n, int num)
{
    int i = 0;

    while (i < n)
    {
        if (num >= vect[i])
        {
            if (vect[i] == num)
            {
                return i; 
            }
        }
        else
        {
            return -1; 
        }
    }

    return -1; 
}

int busq_sec_ord(int vect[],int n, int num)
{
    int i=0;
    while (i<n)
    {
        if(num>=vect[i])
        {
            if (num==vect[i])
            {
                return i;
            }
        }
        else
        {
            return -1;
        }
        i++;
    }
    return -1;
}
int busq_Sec_Matric(int mat[][4], int m, int n, int num)
{
    int i, j;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (mat[i][j] == num)
            {
                return i; 
            }
        }
    }

    return -1; 
}
int vali_num(int ri, int rf, char msg[30], char msg2[30])
{
    char xnum[30];
    int num;
    do
    {
        // system("CLS");
        printf("%s", msg);
        fflush(stdin);
        gets(xnum);
        num = atoi(xnum);
        if (num < ri || num > rf)
        {
            printf("%s", msg2);
            system("PAUSE");
            system("CLS");
        }
    } while (num < ri || num > rf);
}

int vali_espacio(char cadena[])
{
    int i = 0;

    if (cadena[0] == ' ')
    {
        return 0;
    }
    if (cadena[strlen(cadena)] == ' ')
    {
        return 0;
    }

    while (cadena[i] != '\0')
    {
        if (cadena[i] == ' ')
        {
            if (cadena[i + 1] == ' ')
            {
                return 0;
            }
        }
        i++;
    }

    return 1;
}

void quita_espacio(char cad[])
{
    int i, j;
    i = 0;
    j = 0;
    while (cad[i] != '\0')
    {
        if (cad[i] != ' ')
        {
            cad[j] = cad[i];
            j++;
        }
        i++;
    }
    cad[j] = '\0';
}

int vali_alfa(char cadena[])
{
    int i = 0;

    while (cadena[i] != '\0')
    {
        if (cadena[i] != ' ')
        {
            if (cadena[i] < 'A' || cadena[i] > 'Z')
            {
                return 0;
            }
        }

        i++;
    }

    return 1;
}

void ordenar(int vect[], int n)
{
    int i, j, aux;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (vect[j] <= vect[i])
            {
                aux = vect[i];
                vect[i] = vect[j];
                vect[j] = aux;
            }
        }
    }
}

int busq_seq(int vect[], int n, int num)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (vect[i] == num)
        {
            return i; // Regresa esto si encontro un numero igual
        }
    }
    return -1; // regresa esto si es que no hay ninguno igual
}

int largo_cadena(char cadena[])
{
    int i;
    i = 0;
    while (cadena[i] != '\0')
    {
        i++;
    }
    return i;
}

void mayus(char cadena[])
{
    int i;
    char caracter;

    for (i = 0; cadena[i] != '\0'; i++)
    {
        caracter = cadena[i];

        if (caracter >= 'a' && caracter <= 'z')
        {
            caracter -= 32;
        }

        cadena[i] = caracter;
    }
}

void convminus(char cadena[])
{
    int i;
    char caracter;

    for (i = 0; cadena[i] != '\0'; i++)
    {
        caracter = cadena[i];
        if (caracter >= 'A' && caracter <= 'Z')
        {
            caracter += 32;
        }
    }
}

char busq_vocal(char cad[])
{
    char vocal;
    int i = 1, n;
    n = strlen(cad);
    while (i < n)
    {
        if (cad[i] == 'A' || cad[i] == 'E' || cad[i] == 'I' || cad[i] == 'O' || cad[i] == 'U' || cad[i] == '/' || cad[i] == '-' || cad[i] == '.')
        {
            return cad[i];
        }
        i++;
    }
    return 'X';
}

char busq_cons(char cad[])
{
    int n, i;
    n = strlen(cad);
    i = 1;
    while (i < n)
    {
        if (cad[i] != 'A' && cad[i] != 'E' && cad[i] != 'I' && cad[i] != 'O' && cad[i] != 'U' && cad[i] != ' ')
        {
            return cad[i];
        }
        i++;
    }
    return 'X';
}

int num_aleat(int ri, int rf)

{
    int rango;
    rango = (rf - ri + 1);
    return rand() % rango + ri;
}

void validar_enie(char cad[])
{
    int i, n;
    n = strlen(cad);

    for (i = 0; i < n; i++)
    {
        if (cad[i] == -92 || cad[i] == -91)
        {
            cad[i] = 'X';
        }
    }
}

void quit_prepo(char cadena[], char preposiciones[][5])
{
    int i, n;
    for (i = 0; i < 19; i++)
    {
        char *prepos = preposiciones[i];
        n = strlen(prepos);

        if (strncmp(cadena, prepos, n) == 0)
        {
            memmove(cadena, cadena + n, strlen(cadena) - n + 1); 
        }
    }
}

void validar_u(char cad[])
{
    int i, n;
    n = strlen(cad);

    for (i = 0; i < n; i++)
    {
        if (cad[i] == 129 || cad[i] == 154)
        {
            cad[i] = 'U';
        }
    }
}

int validar_cad(char cadena[])
{
    int no, i, n;

    do
    {
        fflush(stdin);
        gets(cadena);
        no = 0;
        mayus(cadena);
        if (strcmp(cadena, "MAX") == 0)
        {
            strcpy(cadena, "MAXX");
        }
        for (i = 0; cadena[i] != '\0'; i++)
        {
            if ((unsigned char)cadena[i] == 154)
            {
                cadena[i] = 'U';
            }
        }

        if (cadena[0] == ' ')
        {
            no = 1;
        }
        if (cadena[0] == '\0')
        {
            no = 1;
        }

        n = strlen(cadena);

        for (i = 0; cadena[i] != '\0'; i++)
        {
            if (cadena[i] > 90)
            {
                if (cadena[i] >= 97)
                {
                    if (cadena[i] > 122)
                    {
                        no = 1;
                        printf("NO INGRESES CARACTERES ESPECIALES\n");
                    }
                }
                else
                {
                    no = 1;
                    printf("NO INGRESES CARACTERES ESPECIALES\n");
                }
            }
            else
            {
                if (cadena[i] == 32)
                {
                    if (cadena[i + 1] == 32)
                    {
                        no = 1;
                        printf("NO INGRESE DOS ESPACIOS\n");
                    }
                }
                else
                {
                    if (cadena[i] < 65)
                    {
                        if (cadena[i] == -92 || cadena[i] == -91)
                        {
                            n = 0;
                        }
                        else
                        {
                            if (cadena[i] == 46)
                            {
                                cadena[i] = 'X';
                                no = 0;
                            }
                            else
                            {
                                no = 1;
                                printf("NO INGRESES CARACTERES ESPECIALES\n");
                            }
                        }
                    }
                }
            }
        }
        if (no == 1)
        {
            printf("INTENTALO DE NUEVO\n");
        }

        if (n > 30)
        {
            printf("INTENTALO DE NUEVO\n");
            no = 1;
        }

    } while (no == 1);

    return 0;
}