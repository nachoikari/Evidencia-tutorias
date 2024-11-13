#include "Producto.h"
//Uso para inicializar los atributos de la clase
Producto::Producto(){
	this->cantidad = 0;
	this->nombre = "indef";
	this->precio = 0.0;
}
/*Constructor con parametros*/
Producto::Producto(string pNombre, int pCantidad, double pPrecio){
	this->nombre = pNombre;
	this->cantidad = pCantidad;
	this->precio = pPrecio;
}
//Setters
void Producto::setNombre(string pNombre){
	this->nombre = pNombre;
}

void Producto::setCantidad(int pCantidad){
	this->cantidad = pCantidad;
}

void Producto::setPrecio(double pPrecio){
	this->precio = pPrecio;
}
//getters
string Producto::getNombre(){
	return this->nombre;
}

int Producto::getCantidad(){
	return this->cantidad;
}

double Producto::getPrecio(){
	return this->precio;
}

double Producto::calcularValorTotal() const{
	return this->cantidad * this->precio;
}

Producto::~Producto(){

}
