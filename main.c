#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "vectores.h"


int main()
{

    int vector[5];
    cargaAleatoriaVectorEnteros(vector, "Ingrese una edad: ", 5, -1);

    int i;
    for(i = 0; i < 5; i++)
    {
        printf("%d\n", vector[i]);
    }

    return 0;
}
