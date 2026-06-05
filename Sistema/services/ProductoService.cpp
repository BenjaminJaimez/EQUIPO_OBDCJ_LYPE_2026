#include <iostream>
#include <string>
#include "../models/Producto.h"
#include "ProductosService.h"
#include <vector>
using namespace std;

void ProductosService::agregarProducto(vector<Producto>& productos){
    Producto nuevoProducto;
    cout << "--Registrar nuevo producto--" << endl;
    cout << "ID aleatorio y unico generado automaticamente: ";
    nuevoProducto.id = to_string(rand() % 100000); // Genera un ID aleatorio entre 0 y 99999
    cout << nuevoProducto.id << endl;
    cout << "Ingrese el nombre del producto: ";
    getline(cin, nuevoProducto.nombre);
    cout << "Ingrese el precio del producto: ";
    cin >> nuevoProducto.precio;
    cout << "Ingrese la fecha de caducidad (dia mes anio): ";
    cin >> nuevoProducto.fechaCaducidad.dia >> nuevoProducto.fechaCaducidad.mes >> nuevoProducto.fechaCaducidad.anio;
    // Aquí podrías agregar el código para guardar el producto en una base de datos o archivo
    productos.push_back(nuevoProducto);
    cout << "Producto agregado exitosamente!" << endl;
}
void ProductosService::mostrarProductos(const vector<Producto>& productos){
    if(productos.empty()){
        cout << "No hay productos registrados." << endl;
        return;
    }
    // Aquí podrías agregar el código para leer los productos de una base de datos o archivo
    cout << "Mostrando productos regsitrados..." << endl;
    for(int i = 0; i < productos.size(); i++){
        cout << "Producto #" << i + 1 << endl;
        cout << "ID: " << productos[i].id << endl;
        cout << "Nombre: " << productos[i].nombre << endl;
        cout << "Precio: $" << productos[i].precio << endl;
        cout << "Fecha de caducidad: " << productos[i].fechaCaducidad.dia << "/" 
             << productos[i].fechaCaducidad.mes << "/" 
             << productos[i].fechaCaducidad.anio << endl;
        cout << "-----------------------------" << endl;
    }
}
void ProductosService::eliminarProducto(vector<Producto>& productos, const string id){
    if(productos.empty()){
        cout << "No hay productos registrados." << endl;
        return;
    }
    for(int i = 0; i < productos.size(); i++){
        if(productos[i].id == id){
            productos.erase(productos.begin() + i);
            cout << "Producto eliminado exitosamente!" << endl;
            return;
        }
    }
    cout << "No se encontró ningún producto con el ID especificado." << endl;
}
