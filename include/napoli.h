#ifndef NAPOLI_H_INCLUDED
#define NAPOLI_H_INCLUDED

#include "Lista.h"
#include <string>

struct Pizzeria
{
    int id_pizzeria;
    std::string localidad;
    Lista lista_ventas;

    Pizzeria();
};

struct Venta
{
    int id_pizzeria;
    std::string id_venta;
    std::string localidad;
    Lista lista_ventas;

    Pizzeria(std::string id_pizzeria);
};

#endif
