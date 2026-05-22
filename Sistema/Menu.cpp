#include <string>
#include <iostream>
#include "../models/Producto.h"
#include <vector>
#include "Menu.h"
#include "../services/ProductosService.h"
using namespace std;

void Menu::mostrar(){
    cout << "----Menu Principal----" << endl;
    cout << "1. Agregar producto" << endl;
    cout << "2. Mostrar productos" << endl;
    cout << "3. Eliminar producto" << endl;
    cout << "4. Salir" << endl;
}
string Menu::leerOpcion(int opcion){
    switch(opcion){
        case 1:
            return "Agregar producto";
        case 2:
            return "Mostrar productos";
        case 3:
            return "Eliminar producto";
        case 4:
            return "Salir";
        default:
            return "Opción no válida";
    }
}
