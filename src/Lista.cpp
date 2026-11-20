#include "Lista.h"

using namespace std;

Lista::Lista()
{
    cabeza = actual = final = NULL;
}

Lista::~Lista()
{
    pnodo aux;
    while(cabeza)
    {
        aux = cabeza;
        cabeza = cabeza->siguiente;
        delete aux;
    }
    actual = NULL;
}

void Lista::insertarNodo(Venta v)
{
    pnodo aux;

    if (listaVacia())
    {
        cabeza = new NodoLista(v, NULL);
        final = cabeza;
    }
    else
    {
        aux = new NodoLista(v, NULL);
        final->siguiente = aux;
        final = aux;
    }
}

void Lista::borrarNodo(string id_venta)
{
    if (listaVacia()) return;

    pnodo anterior = NULL;
    actual = cabeza;

    while (actual->valor.id_venta != id_venta && (actual->siguiente) != NULL)
    {
        anterior = actual;
        actual = actual->siguiente;
    }

    if (actual->valor.id_venta == id_venta)
    {
        if (actual == cabeza)
        {
            cabeza = actual->siguiente;
            if (cabeza == NULL) final = NULL;
        }
        else
        {
            anterior->siguiente = actual->siguiente;
            if (actual == final)
            {
                final = anterior;
            }
        }
        actual->siguiente = NULL;
        delete actual;
        actual = NULL;
    }
}


bool Lista::listaVacia()
{
    return cabeza == NULL;
}

void Lista::esCabeza()
{
    actual = cabeza;
}

void Lista::esFinal()
{
    esCabeza();
    if(!listaVacia())
        while(actual->siguiente)
            esSiguiente();
}

void Lista::esSiguiente()
{
    if(actual) actual = actual->siguiente;
}

bool Lista::esActual()
{
    return actual != NULL;
}

int Lista::valorActual()
{
    return actual->valor;
}


void Lista::recorrerLista()
{
    pnodo aux;
    aux = cabeza;

    while(aux)
    {
        cout << aux->valor << "-> ";
        aux = aux->siguiente;
    }
    cout << endl;
}
