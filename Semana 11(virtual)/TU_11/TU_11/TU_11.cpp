#include <iostream>
const int size = 5;
//int[][] m
//int m[][]
int arr[size] = { 1,2,3,4,5 };
int matriz[size][size] = {
  //  0   1   2   3   4
/*0*/{1,  2,  3,  4,  5},
/*1*/{6,  7,  8,  9,  10},
/*2*/{11, 12, 13, 14, 15},
/*3*/{16, 17, 18, 19, 20},
/*4*/{21, 22, 23, 24, 25}
};
void printCol(int col, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << matriz[col][i] << " ";
    }
} 
void printInvDiag() {
    for (int i = 0; i < size; i++) {
        std::cout << matriz[i][size - 1 - i] << " ";
    }
}
void circularArr() {
    int aux = 0;
    for (int i = 1; i < size; i++) {
        if (i == size - 1) {
            arr[0] =
        }
        aux = arr[i - 1];
        arr[i - 1] = 0;
        arr[i] = aux;

    }
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
}
int main(){
    //printCol(2, 5);
    //printInvDiag();
    circularArr();
}

