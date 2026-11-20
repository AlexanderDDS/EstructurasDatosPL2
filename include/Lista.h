#ifndef LISTA_H
#define LISTA_H
#include "NodoLista.h"

class Lista
{
private:
    pnodo cabeza, actual, final;

public:
    Lista();
    ~Lista();

    void insertarNodo(std::string id_venta);
    void borrarNodo(int v);
    bool listaVacia();
    void esCabeza();
    void esFinal();
    void esSiguiente();
    bool esActual();
    Venta valorActual();
    void recorrerLista();
};

#endif
