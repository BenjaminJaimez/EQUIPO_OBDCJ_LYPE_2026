#include <iostream>
#include <string>
#include "../models/Producto.h"
#include "ProductosService.h"
using namespace std;
const int MAX_PRODUCTOS = 10;
Producto productos[MAX_PRODUCTOS];
int contadorProductos = 0;
void ProductosService::agregarProducto(){
    if (contadorProductos >= MAX_PRODUCTOS) {
        cout << "No se pueden agregar más productos." << endl;
        return;
    }
    Producto producto;
    cout << "--Registrar nuevo producto--" << endl;
    cout << "Ingrese el ID del producto: ";
    cin >> producto[contadorProductos].id;
    cout << "Ingrese el nombre del producto: ";
    getline(cin producto[contadorProductos].nombre);
    cout << "Ingrese la fecha de caducidad (dia mes anio): ";
    cin >> producto[contadorProductos].fechaCaducidad.dia >> producto[contadorProductos].fechaCaducidad.mes >> producto[contadorProductos].fechaCaducidad.anio;
    cout << "Ingrese el precio del producto: ";
    cin >> producto[contadorProductos].precio;
    // Aquí podrías agregar el código para guardar el producto en una base de datos o archivo
    cout << "Producto agregado exitosamente!" << endl;
    contadorProductos++;
}
void ProductosService::mostrarProductos(){
    // Aquí podrías agregar el código para leer los productos de una base de datos o archivo
    cout << "Mostrando productos..." << endl;
}