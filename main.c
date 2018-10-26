#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "vectores.h"
#include "ingresoDatos.h"
#include "validacionDatos.h"


int main()
{
    int numero;
    numero = ingresaEntero("Ingrese anio de nacimiento: \n", 2018, 1800);

    printf("%d", numero);

    return 0;
}
