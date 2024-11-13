#include "Persona.h"

Persona::Persona(){
	this->edad = 0;
	this->nombre = "indef";
}

Persona::Persona(int pEdad, string pNombre){
	this->edad = pEdad;
	this->nombre = pNombre;
}

void Persona::setNombre(string pNombre){
	this->nombre = pNombre;
}

void Persona::setEdad(int pEdad){
	this->edad = pEdad;
}

string Persona::getNombre(){
	return this->nombre;
}

int Persona::getEdad() const{
	return this->edad;
}

Persona::~Persona()
{
}
