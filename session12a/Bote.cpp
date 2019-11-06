//
// Created by rodrigo.recharte on 6/11/2019.
//

#include "Bote.h"
#include <iostream>
#include <ctime>
using namespace std;

Bote::Bote() {
    posX = 0;
    posY = 0;
    srand(time(nullptr));
    velocidadMinima = 0;
    velocidadMaxima = 300;
    velocidadActual = velocidadMinima + (rand() % ( velocidadMaxima - velocidadMinima + 1 ) );
}

void Bote::avanzar() {
    cout<<"Avanzando:"<<endl;
    cout<<"Desde:"<<posX<<","<<posY;
    posX = posX + velocidadActual;
    cout<<"Hasta:"<<posX<<","<<posY;
}

void Bote::retroceder() {
    posX = posX - velocidadActual;
}