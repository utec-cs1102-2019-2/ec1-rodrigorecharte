#include <iostream>
using namespace std;

int main() {
    char carac = 'a';
    int r = 0;
    char *p = &carac;
    char **pp_carac = &p;
    int *p_entero = &r;
    int **ptr_entero = &p_entero;
    cout << "A caracter:\n" << *p << "\t" << p << "\n" << *pp_carac << "\t" << pp_carac << "\nA entero:\n" << *p_entero << "\t" << p_entero << "\n" << *ptr_entero << "\t" << ptr_entero;

    return 0;
}
