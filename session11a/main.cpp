#include <iostream>
#include "Tablero.h"
int main() {
    std::cout << "Hello, World!" << std::endl;
    Tablero *buscaminas = new Tablero(3,4);
    buscaminas->instalar_minas();
    buscaminas->mostrar();
    return 0;
<<<<<<< HEAD
}
=======
}
>>>>>>> 555956f8a1ad8ba1953da4043a60725ace834034
