#include <stdio.h>

const int MAX_SIZE = 100;

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int diagonal[MAX_SIZE];
    int n, m;
	
	printf("Nota: Ingrese los datos separados por un espacio solamente");
    printf("\nIngrese el tamano de la matriz en el formato:(filas columnas): ");

	scanf("%d %d", &n, &m);

    printf("Ingrese los elementos de la matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Guardar la diagonal en el array
    int min_size = (n < m) ? n : m; // Tamaño mínimo entre filas y columnas para asegurar que quepa la diagonal
    for (int i = 0; i < min_size; i++) {
        diagonal[i] = matrix[i][i];
    }

    // Imprimir la matriz
    printf("\nLa matriz ingresada es:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Imprimir el array diagonal
    printf("\nLa diagonal de la matriz es:\n");
    for (int i = 0; i < min_size; i++) {
        printf("%d ", diagonal[i]);
    }
    printf("\n");

    // Calcular y imprimir la suma de los elementos del array diagonal
    int diagonal_sum = 0;
    for (int i = 0; i < min_size; i++) {
        diagonal_sum += diagonal[i];
    }
    printf("\nLa suma de los elementos de la diagonal es: %d\n", diagonal_sum);

    return 0;
}
