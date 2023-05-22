#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void llenarMatrizAleatoria(int matriz[][100], int filas, int columnas) {
    int i, j;
    
    srand(time(NULL));
    
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 101; // Genera un número aleatorio entre 0 y 100
        }
    }
}



