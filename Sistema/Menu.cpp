#include <string>
#include <iostream>
#include "models/Producto.h"
#include "services/ProductosService.h"
#include <vector>
#include "Menu.h"
using namespace std;

void Menu::mostrar(){
    cout << "----Menu Principal----" << endl;
    cout << "1. Agregar producto" << endl;
    cout << "2. Mostrar productos" << endl;
    cout << "3. Eliminar producto" << endl;
    cout << "4. Salir" << endl;
}
string Menu::leerOpcion(int opcion){
    switch (opcion)
    {
    case 1: {
        vector<Producto> productos;
        ProductosService::agregarProducto(productos);
        break;
    }
    case 2: {
        vector<Producto> productos;
        ProductosService::mostrarProductos(productos);
        break;
    }
    case 3: {
        int idProducto;
        cout << "Ingrese el id del producto a eliminar: ";
        cin >> idProducto;
        vector<Producto> productos;
        ProductosService::eliminarProducto(productos, idProducto);
        break;
    }
    case 4:
        return "Salir";
    default:
        return "Opcion no valida";
    }
}