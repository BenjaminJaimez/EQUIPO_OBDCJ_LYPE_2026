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
    case 1:
        return "Agregar producto";
        break;
    case 2:
        return "Mostrar productos";
        break;
    case 3:
        return "Eliminar producto";
        break;
    case 4:
        return "Salir";
        break;
    
    default:
        return "Opcion no valida";
        break;
    }
}