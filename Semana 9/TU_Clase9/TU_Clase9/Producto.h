#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>
#include <iostream>
using namespace std;
class Producto{
private:
	string nombre;
	int cantidad;
	double precio;
public:
	/*Constructor metodo con el mismo nombre de la clase*/
	Producto();
	Producto(string pNombre, int pCantidad, double pPrecio);
	//setters
	void setNombre(string pNombre);
	void setCantidad(int pCantidad);
	void setPrecio(double pPrecio);
	//Getters
	string getNombre();
	int getCantidad();
	double getPrecio();
	//Metodos del ejercicio
	double calcularValorTotal() const;
	//Destructor
	~Producto();
};
#endif // !
