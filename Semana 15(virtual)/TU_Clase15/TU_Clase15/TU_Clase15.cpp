#include <iostream>
#include <vector>


using std::cout;
using std::endl;
using std::cin;
/*
. Escribe un programa en Java que reciba una matriz 3 × 3 y calcule la
suma de los elementos de cada fila. El programa debe imprimir la
suma de cada fila por separado.


*/
const int size = 3;

void sumarFila(int matrix[size][size], int pSize) {
    int suma = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            suma += matrix[i][j];
        }
        cout << "Suma de la fila: " << i << endl;
        cout << suma << endl;
        suma = 0;
    }
}
/*
    Desarrolla un programa en Java que reciba una matriz 3 × 3 y muestre
    en pantalla los elementos de la diagonal secundaria (es decir, los
    elementos en las posiciones (0, 2), (1, 1) y (2, 0)).
*/

void imprimirSecundaria(int matrix[size][size], int pSize) {
    int suma = 0;
    for (int i = 0; i < size; i++) {
        cout << matrix[i][size - 1 - i]<<" ";
        suma += matrix[i][size - 1 - i];
    }
    cout << endl;
    cout << suma << endl;
}
/*
    Implementa un programa que reciba una matriz 3 × 3 y cuente cuantos
    numeros pares contiene.
*/
void contarPares(int matrix[size][size], int pSize) {
    int pares = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (matrix[i][j] % 2 == 0) {
                pares++;
            }
        }
    }
    cout << "Cantidad de numeros pares: " << pares << endl;
}
/*
    Escribe un programa en Java que permita intercambiar la primera y
    la ultima fila de una matriz 3 × 3 e imprima la matriz resultante.

*/
void intercambiarFilas(int matrix[size][size], int pSize) {
    for (int i = 0; i < size; i++) {
        int aux = 0;
        aux = matrix[0][i];

        matrix[0][i] = matrix[size - 1][i];
        
        matrix[size - 1][i] = aux;
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}


/*
    Crear una funcion que reciba una matriz y sume la fila i
    Crear una funcion que reciba una matriz y sume la column i(i es un parametro de la funcion)
*/
int main(){
    int matriz[size][size] = {  {1, 7, 8},
                                {3, 1, 9},
                                {5, 10, 6} };
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    cout << "==============" << endl;
    //sumarFila(matriz, size);
    //imprimirSecundaria(matriz, size);
    //contarPares(matriz, size);
    //intercambiarFilas(matriz, size);

    return 0;
}


