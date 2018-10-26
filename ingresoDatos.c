#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ingresoDatos.h"
#include "validacionDatos.h"


/** \brief pide un numero al usuario, valida que esté dentro del rango de un entero, que no haya caracteres
 *         que no sean numeros y que el numero entre dentro de un rango establecido por el usuario
 *
 * \param mensaje[] char mensaje que será mostrado al usuario
 * \param max int Numero maximo que puede aceptar la funcion
 * \param min int Numero minimo que acepta la funcion
 * \return int número ingresado por el usuario
 *
 */
int ingresaEntero(char mensaje[], int max, int min)
{
    int numero;
    char buffer[6];
    int i;

    int banderaLargo;
    int banderaCaracterInvalido;
    int banderaRango;

    printf("%s", mensaje);
    fflush(stdin);
    gets(buffer);

    do
    {
        banderaCaracterInvalido = 0;
        banderaLargo = 0;
        banderaRango = 0;

        if(strlen(buffer) >= 6)
        {
            banderaLargo = 1;
            puts("Error. Demasiados digitos.");
        }
        else
        {
            numero = atoi(buffer);
            if(numero < min || numero > max)
            {
                banderaRango = 1;
                puts("Error. El numero ingresado esta fuera de rango.");
            }
        }

        for(i=0; i<strlen(buffer); i++)
        {
            if((buffer[i] < '0' || buffer[i] > '9') && buffer[i] != '-')
            {
                banderaCaracterInvalido = 1;
                puts("Error. Ingreso caracteres invalidos.");
                break;
            }
        }

        if(banderaCaracterInvalido == 1 || banderaLargo == 1 || banderaRango == 1)
        {
            puts("Ingrese el numero nuevamente: ");
            fflush(stdin);
            gets(buffer);
        }

    }
    while(banderaCaracterInvalido == 1 || banderaLargo == 1 || banderaRango == 1);

    return numero;
}


/** \brief pide un numero al usuario y lo retorna
 *
 * \param mensaje[] char mensaje que será mostrado al usuario
 * \return float número ingresado por el usuario
 *
 */
float ingresaFlotante(char mensaje[])
{
    float numero;
    printf("%s", mensaje);
    scanf("%f", &numero);
    return numero;
}


/** \brief pide un carcater al usuario y lo retorna
 *
 * \param mensaje[] char mensaje que será mostrado al usuario
 * \return char caracter ingresado por el usuario
 *
 */
char ingresaCaracter(char mensaje[])
{
    char caracter;
    printf("%s", mensaje);
    fflush(stdin);
    scanf("%c", &caracter);
    return caracter;
}


/** \brief
 *
 * \return char
 *
 */
char pideYValidaSiNo()
{
    char letra;
    fflush(stdin);
    letra = getchar();

    while(letra != 's' && letra != 'n')
    {
        puts("Ingrese una opcion correcta: s/n");
        fflush(stdin);
        letra = getchar();
    }
    return letra;
}
