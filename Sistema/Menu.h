#ifndef MENU_H
#define MENU_H
#include<string>
using namespace std;

class Menu {
    public:
        static void mostrar();
        static string leerOpcion(int opcion);
};
#endif