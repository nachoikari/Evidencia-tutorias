#include <iostream>
using namespace std;

int main() {
    // Declaración de una matriz de 3x3
    int matriz[3][3];

    // Rellenar la matriz con valores
    cout << "Llenando la matriz con valores..." << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = (i + 1) * (j + 1);  // Asigna valores de ejemplo
            cout << "matriz[" << i << "][" << j << "] = " << matriz[i][j] << endl;
        }
    }

    // Mostrar la matriz
    cout << "\nLa matriz es:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriz[i][j] << " ";  // Imprime cada elemento de la fila
        }
        cout << endl;  // Nueva línea al final de cada fila
    }

    return 0;
}
