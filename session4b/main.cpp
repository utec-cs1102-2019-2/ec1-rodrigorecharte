#include <iostream>
using namespace std;

void notas(float &a, float &b);
int main() {
    float pc1 = 0.0;
    float bonus = 0.0;
    notas (pc1, bonus);
    cout<< pc1 << "\t" << bonus << endl;
    float *ptr_pc1 = &pc1;
    *ptr_pc1 = pc1 + bonus;
    cout<< *ptr_pc1;
    return 0;
}

void notas(float &a, float &b) {
    cin >> a;
    cin >> b;
    return;
}