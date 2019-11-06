#ifndef HERENCIA_COMIDA_H
#define HERENCIA_COMIDA_H

class Comida {
protected:
    TipoString m_Nombre;
    TipoEntero m_Puntos;
public:
    CAlimento(TipoString, TipoEntero);
    ~CAlimento();
    TipoEntero getPuntos();
    TipoString getNombre();
};

#endif //HERENCIA_COMIDA_H
