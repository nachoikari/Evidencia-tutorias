#include "Persona.h"
int main(){
	const int size = 3;
	Persona obj1 = Persona(20, "Isaac");
	/*obj1.hola();
	//Persona arr[size];
	/*for (int i = 0; i < size; i++) {
		int edad;
		std::string nombre;
		std::cout << "ingrese el nombre: " << std::endl;
		std::cin >> nombre;
		std::cout << "ingrese la edad: " << std::endl;
		std::cin >> edad;
		arr[i] = Persona(edad, nombre);
	}
	for (int i = 0; i < size; i++) {
		arr[i].hola();
	}*/
	obj1.asignarCursos();
	obj1.mostrarCurso();
}
