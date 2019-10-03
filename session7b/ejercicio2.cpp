#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
using namespace std;

int main(){
    int n=0;
    cout<<"Ingrese cantidad de numeros:";
    cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++){
        cout<<"Ingrese elemento:"<<i<<":", cin>>i;

    }
    for(int i=n-1;n>=0;i--){
        cout<<v[i]<<",";
    }
    return 0;
}

