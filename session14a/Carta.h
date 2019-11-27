//
// Created by rodrigo.recharte on 27/11/2019.
//

#ifndef SESSION14A_CARTA_H
#define SESSION14A_CARTA_H

#include <iostream>
using namespace std;
class Carta {
public:
    int numero;
    string palo;
    Carta(int numero, string palo);
    void mostrar();
};
#endif //SESSION14A_CARTA_H
