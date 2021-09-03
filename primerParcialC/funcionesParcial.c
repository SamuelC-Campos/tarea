/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "funcionesParcial.h"

int contarAlumnos(char *nombreArchivo) {
    FILE *pa = fopen(nombreArchivo, "r");
    if (pa == NULL) {
        printf("Problema al abri el archivo %s. Termino el programa.\n", nombreArchivo);
        exit(-1);
    }
    //n = cantidad de alumnos
    int n = 0;
    char c = fgetc(pa);
    while (!feof(pa)) {
        if (c == '\n')n++;
        c = fgetc(pa);
    }
    fclose(pa);
    return n - 1;
}

void leerArchivo(char *nombreArchivo) {
    int contador = 0;
    FILE *pa = fopen(nombreArchivo, "r");
    if (pa == NULL) {
        printf("Problema al abri el archivo %s. Termino el programa.\n", nombreArchivo);
        exit(-1);
    }

    char line[100];
    while (fgets(line, sizeof (line), pa)) {

        if (contador == 0) {
            contador = 1;
        } else { 
            while (line != NULL) {               
                printf("%-5s", line);
                break;
            }
            printf("\n");
        }
    }



}







/*void aperturaArchivo(char *nombreArchivo) {
    FILE *pEnt = fopen(nombreArchivo, "r");
    if (pEnt == NULL) {
        printf("Problema al abrir el archivo %s. Termino el programa\n", nombreArchivo);
        exit(-1);
    }
}

void salidaArchivo(char *nombreArchivo) {
    FILE *pSal = fopen(nombreArchivo, "w");
    if (pSal == NULL) {
        printf("Problema al abrir el archivo %s. Termino el programa\n", nombreArchivo);
        exit(-1);
    }
}

void obtenerCarnet(char *nombreArchivo) {
    char linea[30];
    getline(nombreArchivo, linea);
}

void estructuraDatos(int numeroAlumnos) {
    struct datos {
        char alumno[10];
        char peliculas[30];
    } carnet[numeroAlumnos];
}*/