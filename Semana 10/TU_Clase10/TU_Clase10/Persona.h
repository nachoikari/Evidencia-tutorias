#pragma once
#include "string"
#include "Curso.h"
#include <iostream>
using std::string;
using std::cout;
using std::cin;
class Persona{
private:
	int edad;
	std::string name;
	Curso cursos[5];
public:
	Persona();
	Persona(int pEdad, std::string pName);
	void hola();
	void asignarCursos();
	void mostrarCurso();
};

