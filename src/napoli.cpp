#include "napoli.h"
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

Pizzeria::Pizzeria()
{
    string localidades[6] = {"Móstoles", "Alcalá", "Leganés", "Fuenlabrada", "Getafe", "Alcorcón", "Torrejón", "Parla",
                             "Alcobendas", "Coslada", "Pozuelo", "Rivas", "Valdemoro", "Majadahonda", "Aranjuez", "Arganda",
                             "Boadilla", "Pinto", "Colmenar", "Tres Cantos"};
    id_pizzeria = 100 + (rand() % 900);
    localidad = localidades[rand() % 6];
    lista_ventas = new Lista();
}
