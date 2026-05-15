#include <iostream>
#include <string>
#include "Menu.h"
using namespace std;

int main(){
    int opcion;
    string informacion;
    Menu::mostrar();
    cin >> opcion;
    informacion = Menu::leerOpcion(opcion);
    cout << informacion << endl;
    return 0;
}