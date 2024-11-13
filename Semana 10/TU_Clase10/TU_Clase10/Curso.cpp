#include "Curso.h"

Curso::Curso(){

}

Curso::Curso(string pNombre, string pCodigo, int pCreditos){
	this->nombre = pNombre;
	this->codigo = pCodigo;
	this->creditos = pCreditos;
}

string Curso::toString() const{
	return "El nombre es: " + this->nombre + ", el codigo es:  " + this->codigo;
}
