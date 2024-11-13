#ifndef PERSONA_H
#define PERSONA_H
#include <string>
using namespace std;
class Persona{
private:
	string nombre;
	int edad;
public:
	Persona();
	Persona(int pEdad, string pNombre);
	void setNombre(string pNombre);
	void setEdad(int pEdad);
	string getNombre();
	int getEdad() const;
	//Metodos de la clase

	~Persona();
};
#endif
