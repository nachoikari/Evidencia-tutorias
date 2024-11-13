#include <iostream>
#include "Persona.h"
using namespace std;
static void swap(int& a, int& b) {
    int aux = a; 
    a = b;
    b = aux;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
}
static void cambiar(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
    arr[2] = 4;
}
int main(){
    //int a = 2, b = 3;
    //std::cout << a << std::endl;
    //std::cout << b << std::endl;
    //swap(a, b);
    //cout << "Despues de llamar la funcion" << endl;
    //std::cout << a << std::endl;
    //std::cout << b << std::endl;
    /*const int size = 3;
    int arr[size] = { 1,2,3 };
    cambiar(arr, size);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << ", ";
    }*/
    Persona persona1;
    cout << persona1.getNombre() << endl;
    Persona persona2 = Persona(19, "Luis");
    //cout<<"\n"<<persona2.getNombre();
    persona1.setNombre("maria");
    persona1.setEdad(18);
    string nombre = persona1.getNombre();
    cout << nombre;
}
