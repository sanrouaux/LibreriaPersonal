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
 * \return int retorna '1' si la comprobacion es positivo, '0' si es negativa
 *
 */
int validaSoloNumeros(char* cadena)
{
    int retorno = 1;

    int largo;
    largo = strlen(cadena);

    int i;
    for(i=0; i<largo; i++)
    {
        if(cadena[i] < 48 || cadena[i] > 57)
        {
             retorno = 0;
             break;
        }
    }
    return retorno;
}


/** \brief comprueba si una cadena de caracteres tiene todos sus elementos alfabeticos
 *
 * \param char[] cadena a ser evaluada
 * \return int devuelve '1' si la comprobacion es positiva; '0' si es negativa
 *
 */
int validaSoloLetras(char* cadena)
{

    int retorno = 1;

    int largo;
    largo = strlen(cadena);

    int i;
    for(i=0; i<largo; i++)
    {
        if((cadena[i] < 'a' || cadena[i] > 'z') && (cadena[i] < 'A' || cadena[i] > 'Z') && cadena[i] != ' ')
        {
             retorno = 0;
             break;
        }
    }
    return retorno;
}


/** \brief comprueba si una cadena de caracteres tiene todos sus elementos alfanumericos
 *
 * \param char[] cadena a ser evaluada
 * \return int devuelve '1' si la comprobacion es positiva; '0' si es negativa
 *
 */
int compruebaAlfanumerico(char* cadena)
{
    int retorno = 1;

    int largo;
    largo = strlen(cadena);

    int i;
    for(i = 0; i < largo-1; i++)
    {
        if((cadena[i] < '0' || cadena[i] > '9') && (cadena[i] < 'a' || cadena[i] > 'z')
           && (cadena[i] < 'A' || cadena[i] > 'Z'))
        {
            retorno= 0;
            break;
        }
    }
    return retorno;
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



/** \brief Mide el largo de una cadena de caracteres
 *
 * \param cadena[] char Cadena a ser medida
 * \param largoMaximo int Largo maximo que puede tener la cadena, incluyendo al caracter de cierre
 * \return int Retorna 1 si el largo es valido, y 0 si el largo no es valido o no se introdujeron caracteres
 *
 */
int validaLargoCadena(char cadena[], int largoMaximo)
{
    int retorno = 1;
    if(strlen(cadena) >= largoMaximo || strlen(cadena) == 0)
    {
        retorno = 0;
    }
    return retorno;
}
