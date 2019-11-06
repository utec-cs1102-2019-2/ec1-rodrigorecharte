//
// Created by rodrigo.recharte on 6/11/2019.
//

#ifndef SESSION12A_VEHICULO_H
#define SESSION12A_VEHICULO_H

class Vehiculo {
public:
    int velocidadMaxima;
    int velocidadMinima;
    int velocidadActual;
    int posX;
    int posY;

    virtual void avanzar();
    virtual void retroceder();
};

#endif //SESSION12A_VEHICULO_H
