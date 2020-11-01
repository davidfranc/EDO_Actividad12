#include <iostream>
#include "arregloDinamico.h"

using namespace std;

int main () {
    ArregloDinamico <string> arreglo;
    arreglo.insertar_final("Juan");
    arreglo.insertar_final("Pedro");
    arreglo.insertar_inicio("Yolanda");
    arreglo.insertar_inicio("Ana");

    arreglo.mostrar();
    
    arreglo.insertar("LUIS",2);
    
    arreglo.mostrar();
    
    arreglo.eliminar_inicio();
    arreglo.eliminar_final();
    arreglo.eliminar(1);
    
    arreglo.mostrar();
    
    return 0;
}