#include <iostream>
using namespace std;

int main() {
    const int filas = 3;
    const int columnas = 3;
    int matriz[filas][columnas] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int suma = 0;

    // Sumamos los elementos de la matriz
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            suma += matriz[i][j];
        }
    }

    cout << "La suma de todos los elementos de la matriz es: " << suma << endl;

    return 0;
}
