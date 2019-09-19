#include <iostream>
using namespace std;

int main() {
    int var_local = 10;
    int *ptr_var_local = &var_local;
    *ptr_var_local = 20;

    cout<<var_local<<endl;

    return 0;
}
