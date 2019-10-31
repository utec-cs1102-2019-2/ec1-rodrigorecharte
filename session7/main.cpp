#include <iostream>
#include <ctime>
using namespace std;

typedef unsigned int UINT;
void print (int f, int c, UINT *matrix[]);
void create (int f, int c, UINT **matrix);
UINT** multiply(int f, int c, UINT *a[], UINT *b[]);

int main (){
    srand(time(nullptr));
    int filas = 0, columnas = 0;
    cout<<"Filas:\t"; cin>>filas;
    cout<<"Columnas:\t"; cin>>columnas;
    UINT **A = new UINT* [filas];
    UINT **B = new UINT* [filas];
    create(filas, columnas, A);
    create(filas, columnas, B);
    print(filas, columnas, A);
    print(filas, columnas, B);
    print(filas, columnas, multiply(filas, columnas, A, B));
    return 0;
}

UINT ** multiply(int f, int c, UINT *a[], UINT *b[]){
    UINT  **m = new UINT* [f];
    for(int i=0; i<c; i++){
        m[i] = new UINT[c];
        for(int j=0; j<c; j++){
            m[i][j] = a[i][j]*b[i][j];
        }
    }
    return m;
}

void create(int f, int c, UINT **matrix){
    for(int i=0; i<f; i++){
        matrix[i] = new UINT[c];
        for(int j=0; j<f; j++){
            matrix[i][j] = rand()%10;
        }
    }
}

void print(int f, int c, UINT *matrix[]){
    cout<<endl;
    for (int j=0; j<c; j++){
        cout<<"\t"<<j;
    }
    cout<<endl;
    for(int i=0; i<f; i++){
        cout<<i<<"\t";
        for(int j=0; j<c; j++){
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
}