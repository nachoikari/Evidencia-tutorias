#include "Inventario.h"
void registrarProductos();
void mostrarProductos();
void editarProducto();
Inventario invent1;
int main(){
    registrarProductos();
    cout << "=============\n" << endl;
    mostrarProductos();
    Inventario invent2 = invent1;
}
void registrarProductos() {
    for (int i = 0; i < 3; i++) {
        system("cls");
        string nombre;
        int cantidad = 0;
        double precio = 0.0;
        cout << "Ingrese el nombre del producto: " << endl;
        cin >> nombre;
        cout << "Ingrese la cantidad del producto: " << endl;
        cin >> cantidad;
        cout << "Ingrese el precio del producto: " << endl;
        cin >> precio;
        invent1.registrarProducto(nombre, cantidad, precio, i);
    }
}
void mostrarProductos() {
    for (int i = 0; i < 3; i++) {
        invent1.mostrarProducto(i);
    }
    invent1.calcularValorInventario();
}
void editarProducto() {
    //Posicion a modificar
    int arrPos = 2;
    //Ingrese N si no quiere modificar
    string nombre = "";
    //Si no quiere modificar la cantidad ingrese -1
    int cantidad = 0;
    //si no quiere modificar el precio, ingrese -1
    double precio = 0.0;
    invent1.editarObjeto(nombre, cantidad, precio, arrPos);
}