<<<<<<< HEAD
=======

>>>>>>> 555956f8a1ad8ba1953da4043a60725ace834034
#include "Tablero.h"

Tablero::Tablero(int filas, int columnas) {
    this->filas = filas;
    this->columnas = columnas;
    for(int i=0; i<filas; i++){
        vector<Bloque> fila;
        for(int j=0;j<columnas; j++){
            Bloque *bloque = new Bloque();
            fila.push_back(*bloque);
        }
        this->bloques.push_back(fila);
    }
}

void Tablero::instalar_minas() {
    this->bloques[1][1].es_mina = true;
    this->bloques[2][3].es_mina = true;
}

void Tablero::mostrar() {
    cout<<"Cantidad de filas "<<this->filas<<endl;
    cout<<"Cantidad de column "<<this->columnas<<endl;
    for(int i=0; i<this->filas; i++){

        for(int j=0; j<this->columnas; j++){
            if(bloques[i][j].es_mina == true){
                cout<<"*";
            }else{
                cout<<bloques[i][j].minas;
            }
        }
        cout<<endl;
    }
}