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

    void insertarNodo(int v);
    void borrarNodo(int v);
    bool listaVacia();
    void esCabeza();
    void esFinal();
    void esSiguiente();
    bool esActual();
    int valorActual();
    void recorrerLista();
};

#endif
