#ifndef INVENTARIO_H
#define INVENTARIO_H
#include "Producto.h"
class Inventario{
private:
	Producto productos[3];
public:
	Inventario();

	void registrarProducto(string pNombre,int pCantidad, double pPrecio, int posArreglo);
	void mostrarProducto(int posArreglo);
	void calcularValorInventario();
	void editarObjeto(string pNombre, int pCantidad, double pPrecio, int posArreglo);
};
#endif
