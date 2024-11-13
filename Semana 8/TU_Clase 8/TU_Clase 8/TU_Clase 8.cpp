#include <iostream>

void bubbleSortAsc(int arr[], int size);
void bubbleSortDes(int arr[], int size);
void swap(int arr[],int a1,int a2);
/*
    calcularPromedio: para calcular el promedio de las notas.
    buscarNotaMaxima: para encontrar la nota más alta.
    buscarNotaMinima: para encontrar la nota más baja.
    contarAprobados: para contar cuántos estudiantes aprobaron.
*/

int minGrade(int arr[], int size);
int count(int arr[], int size);

int main(){
    const int size = 7;
    int arr[7] = {2,1,3,8,5,7,9};
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    bubbleSortDes(arr, size);
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    int grades[10] = { 32,34,61,92,72,38,15,85,56,75 };

    for (int i = 0; i < 10; i++) {
        std::cout << grades[i] << " ";
    }
    std::cout << "\nNota minima: " << minGrade(grades, 10);
}

void bubbleSortAsc(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 1; j < size; j++) {
            if (arr[j - 1] > arr[j]) {
                swap(arr, j - 1, j);
            }
        }
    }
}
void bubbleSortDes(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 1; j < size; j++) {
            if (arr[j - 1] < arr[j]) {
                swap(arr, j - 1, j);
            }
        }
    }
}
void swap(int arr[], int a1, int a2) {
    int aux = arr[a1];
    arr[a1] = arr[a2];
    arr[a2] = aux;
    return;
}
int minGrade(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    return min;
}
int count(int arr[], int size){
    int counter = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < 60) {
            counter++;
        }
    }
    return counter;
}