//
// Created by rodrigo.recharte on 13/11/2019.
//

#ifndef SESSION13A_TABLERO_H
#define SESSION13A_TABLERO_H

#include <vector>
#include "Cuadrado.h"
using namespace std;
class Tablero {
public:
    int filas = 3;
    int columnas = 3;
    vector<vector<Cuadrado>> grilla;

    Tablero();
    void mostrar();
};


#endif //SESSION13A_TABLERO_H
