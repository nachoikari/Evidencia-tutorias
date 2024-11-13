#pragma once
#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::cin;
class Curso{
private:
	std::string nombre;
	std::string codigo;
	int creditos;
public:
	Curso();
	Curso(string pNombre, string pCodigo, int pCreditos);
	string toString() const;
};

