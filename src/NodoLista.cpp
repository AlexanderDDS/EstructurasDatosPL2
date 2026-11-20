#include "NodoLista.h"

NodoLista::NodoLista(Venta v, NodoLista *sig)
{
    valor = v;
    siguiente = sig;
}

NodoLista::~NodoLista()
{
    //dtor
}
