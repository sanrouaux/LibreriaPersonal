#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ordenamiento.h"
#include "ingresoDatos.h"
#include "validaciones.h"


int main()
{

    char matriz[3][50];

    strcpy(matriz[0], "Juan Dominguez");
    strcpy(matriz[1], "pedro alfonso");
    strcpy(matriz[2], "alejandro ruiz");

    int i;
    puts("Muestro las cadenas no ordenadas:");
    for(i=0; i<3; i++)
    {
        printf("%s\n", matriz[i]);
    }

    ordenaMatrizAlfabeticamente_Burbujeo(matriz, 3);

    puts("\nMuestro las cadenas ordenadas:");
    for(i=0; i<3; i++)
    {
        printf("%s\n", matriz[i]);
    }
    return 0;
}
