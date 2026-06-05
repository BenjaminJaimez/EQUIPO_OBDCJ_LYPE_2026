#ifndef GenericService_H
#define GenericService_H
#include <string>
#include <vector>
using namespace std;
//esrtuctura de datos generica para o servicio
template <typename T>
class GenericService{
//define nuestras funciones genereicas para el servicio
    public:
        static void agregar(vector<T>& registro, T nuevoElemento);
        static void mostrar(const vector<T>& registro);
        static void eliminar(vector<T>& registro, const string id);
        static void buscarId(const vector<T>& registro, const string id);
};
//implementacion de las funciones genericas
template <typename T>
void GenericService<T>::agregar(vector<T>& registro, T nuevoElemento){
    registro.push_back(nuevoElemento);
}
template <typename T>
void GenericService<T>::mostrar(const vector<T>& registro){
   //validar que le vector ni este vacio
    if(registro.empty()){
        cout << "El vector está vacío." << endl;
        return;
    }
    //mostrar los elementos del vector
    for(const T& indice.registro){
        indice.mostrar();
    }
}
#endif;