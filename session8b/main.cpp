#include <iostream>
#include <vector>
#include <ctime>
using namespace std;
typedef int type_n;
void imprimir(vector<vector<int> >matrix, int n);
void imprimir(vector<int>vector);
vector<vector<int> > transpuesta ( vector<vector<int> >matrix);
void nuevo( vector<vector<int> >&matrix, int filas,int columnas);
vector<int> sumar_filas(vector<vector<int> >matrix);
vector<int> sumar_columnas(vector<vector<int> >matrix);
int main(){
    srand( time (nullptr));
    type_n filas,columnas;
    cout<<"Ingrese numero de filas: ";
    cin>>filas;
    cout<<"Ingrese numero de columnas: ";
    cin>>columnas;
    vector <vector<type_n >>matrix (filas,vector<int> (columnas)) ;
    nuevo(matrix,filas,columnas);
    imprimir(matrix,1);
    int escalar=0;
    cout<<"Ingrese escalar: ";
    cin>>escalar;
    imprimir(matrix,escalar);
    vector <vector<type_n >>trans=transpuesta(matrix);
    cout<<"Matriz transversal: "<<endl;
    imprimir(trans,1);
    vector<int> suma_fila=sumar_filas(matrix);
    cout<<endl<<"Suma filas: ";
    imprimir(suma_fila);
    vector<int> suma_columna=sumar_columnas(matrix);
    cout<<endl<<"Suma columnas: ";
    imprimir(suma_columna);
}
void imprimir(vector<int>vector){
    for(int i=0; i < vector.size(); i++){
        cout<<vector[i]<<"\t";
    }
}
vector<int> sumar_filas(vector<vector<int> >matrix){
    vector<int> suma_fila;
    for(int i=0; i < matrix.size(); i++){
        int suma=0;
        for (int j=0;j<matrix[i].size();j++){
            suma+=matrix[i][j];
        }
        suma_fila.push_back(suma);
    }
    return suma_fila;
}
vector<int> sumar_columnas(vector<vector<int> >matrix){
    vector<int> suma_columna;
    for(int i=0; i < matrix.size(); i++){
        int suma=0;
        for (int j=0;j<matrix[i].size();j++){
            suma+=matrix[j][i];
        }
        suma_columna.push_back(suma);
    }
    return suma_columna;
}
vector<vector<int> > transpuesta ( vector<vector<int> >matrix){
    vector<vector<int> > nuevo;
    for(int i=0; i < matrix[0].size(); i++){
        vector <int> vec;
        for (int j=0;j<matrix.size();j++){
            vec.push_back(matrix[j][i]);
        }
        nuevo.push_back(vec);
    }
    return nuevo;
}
void imprimir(vector<vector<int> >matrix,int n){
    cout<<endl;
    for(int i=0; i < matrix.size(); i++){
        for (int j=0;j<matrix[i].size();j++){
            cout<<matrix[i][j]*n<<"\t";
        }
        cout<<endl;
    }
}

void nuevo( vector<vector<int> >&matrix, int filas,int columnas){
    for(int i=0; i < filas; i++){
        for (int j=0;j<columnas;j++){
            matrix[i][j]=rand()%20+20;
        }
    }
}