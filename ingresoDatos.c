#include <stdio.h>
#include <stdlib.h>
#include "ingresoDatos.h"


/** \brief pide un numero al usuario y lo retorna
 *
 * \param mensaje[] char mensaje que ser� mostrado al usuario
 * \return int n�mero ingresado por el usuario
 *
 */
int ingresaEntero(char mensaje[])
{
    int numero;
    printf("%s", mensaje);
    scanf("%d", &numero);
    return numero;
}


/** \brief pide un numero al usuario y lo retorna
 *
 * \param mensaje[] char mensaje que ser� mostrado al usuario
 * \return float n�mero ingresado por el usuario
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
 * \param mensaje[] char mensaje que ser� mostrado al usuario
 * \return char caracter ingresado por el usuario
 *
 */
char ingresaCaracter(char mensaje[])
{
    char caracter;
    printf("%s", mensaje);
    scanf("%c", &caracter);
    return caracter;
}
