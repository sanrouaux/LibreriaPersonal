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
int validaMaximoMinimoEnteros(int numero, int maximo, int minimo, char mensaje[])
{
    while(numero < minimo || numero > maximo)
    {
        puts(mensaje);
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
int compruebaNumerico(char cadena[], int tam)
{
    int respuesta = 1;
    int i;
    for(i = 0 ; i < tam-1; i++)
    {
        if(cadena[i] < '0' || cadena[i] > '9')
        {
            respuesta = 0;
        }
    }
    return respuesta;
}


/** \brief comprueba si una cadena de caracteres tiene todos sus elementos alfabeticos
 *
 * \param char[] cadena a ser evaluada
 * \param int tamano del vector
 * \return int devuelve '1' si la comprobacion es positiva; '0' si es negativa
 *
 */
int compruebaAlfabetico(char cadena[], int tam)
{
    int respuesta = 1;
    int i;
    for(i = 0; i < tam-1; i++)
    {
        if((cadena[i] < 'a' || cadena[i] > 'z') && (cadena[i] < 'A' || cadena[i] > 'Z'))
        {
            respuesta = 0;
        }
    }
    return respuesta;
}


/** \brief comprueba si una cadena de caracteres tiene todos sus elementos alfanumericos
 *
 * \param char[] cadena a ser evaluada
 * \param int tamano del vector
 * \return int devuelve '1' si la comprobacion es positiva; '0' si es negativa
 *
 */
int compruebaAlfanumerico(char cadena[], int tam)
{
    int respuesta = 1;
    int i;
    for(i = 0; i < tam-1; i++)
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
        puts("Ingrese una respuesta valida: s/n");
        fflush(stdin);
        scanf("%c", &respuesta);
    }
}
