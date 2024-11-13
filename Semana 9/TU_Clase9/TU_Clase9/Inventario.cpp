#include "Inventario.h"

Inventario::Inventario(){
	
}

void Inventario::registrarProducto(string pNombre, int pCantidad, double pPrecio, int posArreglo){
	if (posArreglo < 3) {
		this->productos[posArreglo] = Producto(pNombre, pCantidad, pPrecio); 
		/*this->productos[posArreglo].setNombre(pNombre);
		this->productos[posArreglo].setCantidad(pCantidad);
		this->productos[posArreglo].setPrecio(pPrecio);*/
		return;
	}	else {
		cout << "Lista llena" << endl;
	}
}

void Inventario::mostrarProducto(int posArreglo){
	if (posArreglo < 3) {
		cout << "Nombre del producto: " << this->productos[posArreglo].getNombre() << ", Cantidad: "
			<< this->productos[posArreglo].getCantidad() << ", precio: " << this->productos[posArreglo].getPrecio() << endl;
	}else {
		cout << "Posicion no existente" << endl;
	}
}

void Inventario::calcularValorInventario(){
	double valor = 0;
	for (int i = 0; i < 3; i++) {
		valor = valor + this->productos[i].calcularValorTotal();
	}
	cout << "El valor del inventario es de: " << valor << endl;
}

void Inventario::editarObjeto(string pNombre, int pCantidad, double pPrecio, int posArreglo){
	if (posArreglo < 3) {
		if (pNombre != "N") {
			this->productos[posArreglo].setNombre(pNombre);
		}
		if (pCantidad > -1) {
			this->productos[posArreglo].setCantidad(pCantidad);
		}
		if (pPrecio > -1) {
			this->productos[posArreglo].setPrecio(pPrecio);
		}
	}else {
		cout << "Lista llena" << endl;
	}
}
