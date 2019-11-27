#include <iostream>
#include "Juego.h"
using  namespace std;

int main() {
    Juego *juego;
    do{
        juego = new Juego();
        cout<<"---------------------"<<endl;
        juego->start();
        juego->mostrar();
        cout<<juego->esPocker()<<endl;
        cout<<"---------------------"<<endl;
    }while(!juego->esPocker());
    return 0;
}