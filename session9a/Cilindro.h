//
// Created by rodrigo.recharte on 20/11/2019.
//

#ifndef SESSION9A_CILINDRO_H
#define SESSION9A_CILINDRO_H


class Cilindro {
private:
    float radio;
    float altura;
public:
    Cilindro(float radio, float altura);
    float volumen();
    float areaTotal();
    float areaLateral();
    ~Cilindro();

};


#endif //SESSION9A_CILINDRO_H