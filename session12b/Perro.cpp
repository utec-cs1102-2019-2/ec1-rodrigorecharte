//
// Created by rodrigo.recharte on 7/11/2019.
//

#include "Perro.h"

Perro::Perro(string nombre, string raza, int peso
):Mascota( nombre,  raza,  peso) {
    cout<<"Creando un Perro"<<endl;
}

void Perro::dormir() {
    cout<<"Perro sleeping zZZ"<<endl;
}

void Perro::comer() {
    cout<<"Perro durmiendo Grrr"<<endl;
}

void Perro::sonido() {
    cout<<"El perro Firulais dice: Guaaau Guaauu"<<endl;
}