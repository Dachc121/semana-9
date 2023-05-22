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

void calcularMatrizTraspuesta(int matriz[][100], int filas, int columnas, int traspuesta[][100]) {
    int i, j;
    
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            traspuesta[j][i] = matriz[i][j];
        }
    }
}

void imprimirMatriz(int matriz[][100], int filas, int columnas) {
    int i, j;
    
    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int filas, columnas;
    int matriz[100][100];
    int traspuesta[100][100];
    
    printf("Ingrese el número de filas: ");
    scanf("%d", &filas);
    
    printf("Ingrese el número de columnas: ");
    scanf("%d", &columnas);
    
    llenarMatrizAleatoria(matriz, filas, columnas);
    calcularMatrizTraspuesta(matriz, filas, columnas, traspuesta);
    
    printf("Matriz original:\n");
    imprimirMatriz(matriz, filas, columnas);
    
    printf("Matriz traspuesta:\n");
    imprimirMatriz(traspuesta, columnas, filas);
    
    return 0;
}

