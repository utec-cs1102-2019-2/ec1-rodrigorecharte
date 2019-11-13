//
// Created by rodrigo.recharte on 13/11/2019.
//

#include "Humano.h"

Humano::Humano(int numero, string nombre) : Jugador(numero, nombre) {
    cout<<"Crendo un jugador humano"<<endl;
}

void Humano::marcar() {
    cout<<"Turno del humano"<<endl;
    int x;
    int y;
    cout<<"x:";cin>>x;
    cout<<"y:";cin>>y;
    Juego->t->grilla[x][y].marca = 1;

}