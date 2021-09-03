
#include <stdio.h>
#include <stdlib.h>

#include "funcionesParcial.h"

int main() {

    char nombreArchivoEnt[] = "peliculasFavoritasESD135_2021.csv";
    int numeroAlumnos = contarAlumnos(nombreArchivoEnt);
    printf("la cantidad de alumnos es: %d\n", numeroAlumnos);

    leerArchivo(nombreArchivoEnt);
    return 0;
}

