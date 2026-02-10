#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct nodo
{
    int dato;
    struct nodo *anterior;
    struct nodo *siguiente;
} NODO;

int solicitar_entero();
float solicitar_flotante();

void eliminar_elemento(NODO **,int);
void agregar_elemento(NODO **,int);

int main()
{
    NODO *cabeza = NULL;

    free(cabeza);
    return 0;
}

int solicitar_entero()
{
    char Aux[' '];
    int i, p, y, num;
    do
    {
        printf("Introduzca un valor entero: ");
        fflush(stdin);
        gets(Aux); // se lee los datos introducidos
        y = strlen(Aux);

        for (i = 0; i < y; i++)
        {
            if (isdigit(Aux[i]))
                p = 1;
            else
                p = 0;

            if (p == 0)
            {
                printf("\n\n Error, dato mal introducido\n\n ");
                break;
            }
        }
        if (y == 0)
            p = 0;
    } while (p == 0);

    num = atoi(Aux);
    return num;
}

float solicitar_flotante()
{
    char aux[' '];
    int p, y, i, c = 0, n = 0;
    double num;
    do
    {
        // system("cls");
        printf("Introduzca un valor flotante: ");
        fflush(stdin);
        gets(aux);
        y = strlen(aux);
        c = 0;
        n = 0;
        for (i = 0; i < y; i++)
        {
            if (isdigit(aux[i]) || aux[i] == '.' || aux[i] == '-')
            {
                p = 1;
                if (aux[i] == 46)
                    c++;
                if (aux[i] == '-')
                    n++;
            }
            else
                p = 0;

            // Linea modificada para que no pueda haber '-' que no sean en el principio
            if (p == 0 || c > 1 || n > 1 || ((n == 1) && aux[0] != '-'))
            {
                p = 0;
                printf("\n\n\t ERROR, DATO MAL INTRODUCIDO \n\n");
                break;
            }
        }
        if (y == 0)
            p = 0;
    } while (p == 0);

    num = atof(aux);
    return num;
}

//Se pasa como doble puntero en caso de que se quiera borrar el nodo al que apunta la cabeza
void eliminar_elemento(NODO **cabeza,int dato)
{

}

//Se pasa como doble puntero en caso de que se quiera borrar el nodo al que apunta la cabeza
void agregar_elemento(NODO **cabeza,int dato)
{

}