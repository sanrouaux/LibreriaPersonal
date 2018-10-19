#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ingresoDatos.h"


/** \brief pide un numero al usuario y lo retorna
 *
 * \param mensaje[] char mensaje que será mostrado al usuario
 * \return int número ingresado por el usuario
 *
 */
int ingresaEntero(char mensaje[], char mensajeErrorLargo[], char cadena[], int tam)
{
    char buffer[1024];

    printf("%s", mensaje);
    fflush(stdin);
    gets(buffer);

    while(strlen(buffer) >= tam)
    {
        printf("%s", mensajeErrorLargo);
        fflush(stdin);
        gets(buffer);
    }
    strcpy(cadena, buffer);

    return 0;
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
