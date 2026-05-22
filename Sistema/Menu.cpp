#include<string>
#include <iostream>
#include "Menu.h"
using namespace std;

void Menu::mostrar(){
    cout << "----Menu Principal----" << endl;
    cout << "1. Agregar producto" << endl;
    cout << "2. Mostrar productos" << endl;
    cout << "3. Eliminar producto" << endl;
    cout << "Ingrese una opcion: ";
}
string Menu::leerOpcion(int opcion)
{
    return string();
}
