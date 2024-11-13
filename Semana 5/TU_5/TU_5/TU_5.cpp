#include <iostream>
#include <string>
using namespace std;

//Declaracion de una funcion
void mayuscula(string palabra);
void minuscula(string palabra);
void camelCase(string palabra);
int main(){ 
    /*
        Tarea moral, realizar una funcion que reciba una variable string
        esta debe contener una palabra en formato snake_case, ejemplo
    */
    string palabra = "isaac_artavia";
    /*
        Y pasarla a formato camel case, en el caso de la palabra anterios, el resultado seria: isaacArtavia
    */

    string nombre = "CrisTiAn";
    /*for (int indice = 0; indice < nombre.size(); indice++) {
        cout << nombre[indice];
    }*/
    camelCase(palabra);

}
void mayuscula(string palabra) {
    for (int i = 0; i < palabra.size(); i++) {
        if (palabra[i] >= 97 && palabra[i] <= 122) {
            palabra[i] = palabra[i] - 32;
        }
    }
    cout << palabra;
}
void minuscula(string palabra) {

    for (int i = 0; i < palabra.size(); i++) {

        if (palabra[i] >= 65 && palabra[i] <= 90) {
            palabra[i] = palabra[i] + 32;
        }
    }
    cout << palabra;
}
void camelCase(string palabra) {
    //Recibe la palabra en formato snake_case
    int pos = -1;
    for (int i = 0; i < palabra.size(); i++) {
        //Busca el _ para empezar a modificar la 
        if (palabra[i] == '_') {
            pos = i;
            break;
        }
    }
    //No hay guion bajo
    if (pos == -1) {
        return;
    }
    palabra[pos] = palabra[pos + 1] - 32;
    for (int i = pos + 2; i < palabra.size(); i++) {
        palabra[pos + 1] = palabra[i] - 32;
    }
    cout << palabra;
}