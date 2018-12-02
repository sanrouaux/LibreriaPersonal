#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "vectores.h"
#include "validaciones.h"


/** \brief
 *
 * \param arrayLetras[] char
 * \return int
 *
 */
int ubicaMayusculasYMinusculas(char cadena[])
{
    int i;
    if(cadena != NULL)
    {
        strlwr(cadena);
        cadena[0] = toupper(cadena[0]);
        for(i = strlen(cadena); i > 1; i--)
        {
            if(cadena[i - 1] == ' ')
            {
                cadena[i] = toupper(cadena[i]);
            }
        }
        return 0;
    }
    return -1;
}



/** \brief pide secuencialmente el ingreso de numeros hasta completar el vector
 *
 * \param int[] vector a ser rellenado
 * \param char[] mensaje que se mostrara al usuario
 * \param int tamano del vector
 * \return void
 *
 */
void cargaSecuencialVectorEnteros(int vector[], char mensaje[], int tam)
{
    int i;
    for(i = 0; i < tam; i++)
    {
        printf(mensaje);
        scanf("%d", &vector[i]);
    }
}


/** \brief permite cargar valores en un vector en una posicion a eleccion, mientras el usuario lo desee
 *
 * \param int[] vector a completar
 * \param char[] mensaje de pedido de valor
 * \param int tamano del vector
 * \param int valor ilogico en relacion a la informacion que llenara el vector
 * \return void
 *
 */
void cargaAleatoriaVectorEnteros(int vector[], char mensaje[], int tam, int valorIlogico)
{
    int i;
    for(i =0; i < tam; i++)
    {
        vector[i] = valorIlogico;
    }

    int posicion;
    char reemplazo;
    char seguir;

    do
    {
        printf("Eliga una posicion entre 0 y %d: ", tam-1);
        scanf("%d", &posicion);
        posicion = validaRangoEntero(posicion, tam-1, 0);

        if(vector[posicion] != valorIlogico)
        {
            printf("Ya se ha guardado un valor en esta posicion. Desea reemplazarlo? s/n");
            fflush(stdin);
            scanf("%c", &reemplazo);
            reemplazo = validaSiNo(reemplazo);

            if(reemplazo == 's')
            {
                puts(mensaje);
                scanf("%d", &vector[posicion]);
            }
        }
        else
        {
            puts(mensaje);
            scanf("%d", &vector[posicion]);
        }

        puts("Desea ingresar otro valor? s/n");
        fflush(stdin);
        scanf("%c", &seguir);
        validaSiNo(seguir);

    }
    while(seguir == 's');
}



/** \brief permite ingresar secuencialmente cadenas de caracteres
 *
 * \param char[][21] vector en que se alojaran las cadenas
 * \param int cantidad de filas del vector
 * \return void
 *
 */
void ingresaArrayDeCadenas(char listadoCadenas[][50], char mensaje[], int filas)
{
    char buffer[1024];

    int i;
    for(i = 0; i < filas; i++)
    {
        puts(mensaje);
        gets(buffer);

        while(strlen(buffer) > 49)
        {
            puts("Error: la cadena desborda el espacio disponible. ");
            puts(mensaje);
            gets(buffer);
        }
        strcpy(listadoCadenas[i], buffer);
    }
}



int ordenaVectorNumerico(int vector[],int tam) //Metodo de Insercion
{
    int i;
    int j;
    int auxiliar;

    for(i = 1; i < tam; i++)
    {
        auxiliar = vector[i];
        j = i - 1;
        while(j >= 0 && auxiliar < vector[j])
        {
            vector[j+1] = vector[j];
            j--;
        }
        vector[j+1] = auxiliar;
    }

    return 0;
}
