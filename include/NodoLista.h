#ifndef NODOLISTA_H
#define NODOLISTA_H

#include "napoli.h"

class NodoLista
{
private:
    Venta valor;
    NodoLista *siguiente;
    friend class Lista;

public:
    NodoLista(int v, NodoLista *sig = NULL);
    ~NodoLista();
};
typedef NodoLista *pnodo;

#endif
