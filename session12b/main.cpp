#include <iostream>
#include "Mascota.h"
#include "Perro.h"
#include "Gato.h"
#include <vector>
using namespace std;

int main() {
    Perro *p = new Perro("Firulais", "Labrador", 14);
    Gato *g = new Gato("Anvorguesa", "Bengala", 4);
    vector<Mascota *> mascotas;
    mascotas.push_back(p);
    mascotas.push_back(g);

    for(int i=0; i<mascotas.size(); i++){
        mascotas[i]->mostrar();
        mascotas[i]->sonido();

    }

    return 0;
}
