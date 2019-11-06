#include "Comida.h"
Comida::Comida(TipoString pNombre, TipoEntero pPuntos) {
    m_Nombre = pNombre;
    m_Puntos = pPuntos;
}
Comida::~Comida() {

}
TipoEntero Comida::getPuntos() {
    return m_Puntos;
}
TipoString Comida::getNombre() {
    return  m_Nombre;
}
