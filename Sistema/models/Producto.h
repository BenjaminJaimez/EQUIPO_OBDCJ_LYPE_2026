#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>
#include "Fecha.h"
using namespace std;
struct Producto{
    string id;
    string nombre;
    Fecha fechaCaducidad;
    int precio;
};
#endif