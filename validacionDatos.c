#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validacionDatos.h"


/** \brief valida si un numero entero respeta el maximo y el minimo permitido
 *
 * \param numero int numero elegido
 * \param maximo int maximo permitido
 * \param minimo int minimo permitido
 * \param mensaje[] char mensaje a mostrar al usuario en caso de error
 * \return int el numero elegido ya validado
 *
 */
int validaRangoEnteros(int numero, int max, int min)
{
    while(numero < min || numero > max)
    {
        puts("Fuera de rango. Ingrese nuevamente: ");
        fflush(stdin);
        scanf("%d", &numero);
    }
    return numero;
}


/** \brief valida si un numero respeta el maximo y el minimo permitido
 *
 * \param numero float numero elegido
 * \param maximo float maximo permitido
 * \param minimo float minimo permitido
 * \param mensaje[] char mensaje a mostrar al usuario en caso de error
 * \return float el numero elegido ya validado
 *
 */
float validaMaximoMinimoFlotantes(float numero, float maximo, float minimo, char mensaje[])
{
    while(numero < minimo || numero > maximo)
    {
        puts(mensaje);
        fflush(stdin);
        scanf("%f", &numero);
    }
    return numero;
}


/** \brief comprueba si una cadena de caracteres tiene todos sus elementos numericos
 *
 * \param cadena[] char cadena a analizar
 * \param tam int tamano del vector
 * \return int retorna '1' si la comprobacion es positivo: '0' si es negativa
 *
 */
int validaSoloNumeros(char cadena[], int largoMaximo)
{
    int numeroValido;
    int caracterInvalido;
    int largoCadena;
    char buffer[1024];

    do
    {
        caracterInvalido = 0;
        largoCadena = strlen(cadena);
        int i;
        for(i=0; i<largoCadena; i++)
        {
            if(cadena[i] < 48 || cadena[i] > 57)
            {
                caracterInvalido = 1;
            }
        }

        if(caracterInvalido == 1)
        {
            puts("\nIngreso un caracter invalido. Ingrese el numero nuevamente: ");
            fflush(stdin);
            gets(buffer);
            validaLargoCadena(buffer, largoMaximo);
            strcpy(cadena, buffer);
        }
    }
    while(caracterInvalido == 1);
    numeroValido = atoi(cadena);
    return numeroValido;
}


/** \brief comprueba si una cadena de caracteres tiene todos sus elementos alfabeticos
 *
 * \param char[] cadena a ser evaluada
 * \param int tamano del vector
 * \return int devuelve '1' si la comprobacion es positiva; '0' si es negativa
 *
 */
int validaSoloLetras(char cadena[], int largoMaximo)
{

    int largoCadena;
    int caracterInvalido;
    char buffer[1024];

    int i;
    do
    {
        caracterInvalido = 0;
        largoCadena = strlen(cadena);

                      for(i=0; i<largoCadena; i++)
        {
            if((cadena[i] < 'a' || cadena[i] > 'z') && (cadena[i] < 'A' || cadena[i] > 'Z') && cadena[i] != ' ')
            {
                caracterInvalido = 1;
                break;
            }
        }

        if(caracterInvalido == 1)
        {
            puts("Ingreso un caracter invalido. Ingrese la cadena nuevamente:");
            fflush(stdin);
            gets(buffer);
            validaLargoCadena(buffer, largoMaximo);
            strcpy(cadena, buffer);
        }
    }
    while(caracterInvalido == 1);

    return 0;
}

/** \brief comprueba si una cadena de caracteres tiene todos sus elementos alfanumericos
 *
 * \param char[] cadena a ser evaluada
 * \param int tamano del vector
 * \return int devuelve '1' si la comprobacion es positiva; '0' si es negativa
 *
 */
int compruebaAlfanumerico(char cadena[])
{
    int respuesta = 1;
    int largo;
    largo = strlen(cadena);
    int i;
    for(i = 0; i < largo-1; i++)
    {
        if((cadena[i] < '0' || cadena[i] > '9') && (cadena[i] < 'a' || cadena[i] > 'z') && (cadena[i] < 'A' || cadena[i] > 'Z'))
        {
            respuesta = 0;
        }
    }
    return respuesta;
}



/** \brief valida si el usuario introdujo una respuesta correcta: s/n
 *
 * \param respuesta char caracter ingresado por el usuario
 * \return void
 *
 */
char validaSiNo(char respuesta)
{
    while(respuesta != 's' && respuesta != 'n')
    {
        puts("No ingreso una opcion valida. Ingrese: s/n");
        fflush(stdin);
        scanf("%c", &respuesta);
    }
    return respuesta;
}



/** \brief
 *
 * \param cadena[] char
 * \param largoMaximo int
 * \return int
 *
 */
int validaLargoCadena(char cadena[], int largoMaximo)
{
    while(strlen(cadena) >= largoMaximo || strlen(cadena) == 0)
    {
        if(strlen(cadena) == 0)
        {
            puts("No ingreso ningun caracter. Ingrese nuevamente: ");
            fflush(stdin);
            gets(cadena);
        }
        else
        {
            puts("Nombre demasiado largo. Ingrese otro: ");
            fflush(stdin);
            gets(cadena);
        }
    }
    return 0;
}
