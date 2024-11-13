#include <iostream>
using namespace std;



int main(){
    int size = 10;
    int result = 0;
    for (int i = 0; i <= size; i++) {
        int numero = 5;
         result = 0;
        for (int j = 0; j < i; j++) {
           result+= numero;
        }
        cout << result << endl;
    }
    return result;
    
}



//ESTRUCTURAS CONDICIONALES
/*
if(condicion a evaluar ){
    std::cout<<"Hola"<<std::endl;

}else if(condicion a evaluar){
    //Esta se ejecutara en caso de no ejecutarse el primer if, y cumplir con la propia condicion
    std::cout<<"else if"<<std::endl;
}else{
    std::cout<<"No cumplio ninguna de las anteriores"<<std::endl;
}
*/
/*
    int data = 0;
    switch (data) {
        case 1:
            //Similar a realizar if(data == 1){}   
            //En caso de entrar al case 1, no se ejecutaran los demas case
            cout << "Case 1" << endl;
        break;
        case 2:
            cout << "Case 2" << endl;
        break;
        default:
            cout << "No se cumplio ninguna de las anteriores" << endl;
    }
*/
//ESTRUCTURAS ITERATIVAS

//while

/*
    int data = 5
    while(data == 5){
        //Si la condicion se cumple, se ejecutara lo que 
        //esta dentro de los brakects
        cout<<"Hola"
    }
*/

//do while

/*
    int data = 4;
    do {
        //Este primero ejecuta y luego verifica si lo vuelve a ejecutar
        cout << "Hola" << endl;
    } while (data == 4);
*/

//for
/*
    //el ciclo for es el que tiene una estructura mas compleja
    //ya que consta de 3 partes.
    //for (inicialización de la variable de control; condición; incremento/decremento) {
    //      Código a ejecutar en cada iteración
    //}

*/
