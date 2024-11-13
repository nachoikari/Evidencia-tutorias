#include "Persona.h"

Persona::Persona(){
	this->edad = 0;
	this->name = "indef";
}

Persona::Persona(int pEdad, std::string pName){
	this->edad = pEdad;
	this->name = pName;
}

void Persona::hola(){
	std::cout << "Me llamo: "<<this->name<<" mi edad es: "<<this->edad << std::endl;
}

void Persona::asignarCursos(){
	for (int i = 0; i < 5; i++) {
		system("cls");
		int creditos;
		string codigo;
		std::string nombre;
		std::cout << "ingrese el nombre: " << std::endl;
		std::cin >> nombre;
		std::cout << "ingrese la creditos: " << std::endl;
		std::cin >> creditos;
		cout << "Ingrese codigo: " << std::endl;
		cin >> codigo;
		this->cursos[i] = Curso(nombre, codigo, creditos);
	}
}

void Persona::mostrarCurso(){
	for (int i = 0; i < 5; i++) {
		cout<<cursos[i].toString();
	}
}
