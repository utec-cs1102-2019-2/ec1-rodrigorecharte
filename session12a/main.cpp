#include <iostream>
#include "Vehiculo.h"
#include "Bicicleta.h"
#include "Bote.h"
#include <vector>
using namespace std;

int main() {

    Bicicleta *b1 = new Bicicleta();
    Bote *b2 = new Bote();
    b1->avanzar();
    b1->avanzar();
    vector<Vehiculo> vehiculos;
    vehiculos.push_back(*b1);
    vehiculos.push_back(*b2);

    for(int i=0; i<vehiculos.size(); i++){
        vehiculos[i].avanzar();
    }

    return 0;
}