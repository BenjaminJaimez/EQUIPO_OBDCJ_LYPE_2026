#ifndef PRODUCTOS_SERVICE_H
#define PRODUCTOS_SERVICE_H
#include "../models/Producto.h"
#include <vector>
using namespace std;
class ProductosService{
    public:
        static void agregarProducto(vector<Producto>& productos);//CRATE
        static void mostrarProductos(const vector<Producto>& productos);//READ
        static void eliminarProducto(vector<Producto>& productos, int id);//DELETE
};
#endif