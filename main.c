#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "vectores.h"
#include "ingresoDatos.h"
#include "validacionDatos.h"


int main()
{

    int vector[5] = {2,15,7,1,9};

    int i;
    for(i=0; i<5; i++)
    {
        printf("%d - ", vector[i]);
    }

    ordenaVectorNumerico(vector, 5);

    printf("\n");

    for(i=0; i<5; i++)
    {
        printf("%d - ", vector[i]);
    }

    return 0;
}
