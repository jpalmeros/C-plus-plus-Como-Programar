// Fig. 5.14: fig05_14.cpp
// Instrucción continue para terminar una iteracción de una instrucción for.
#include <iostream>
using namespace std;

int main()
{
    for ( unsigned int cuenta = 1; cuenta <= 10; ++cuenta)
    {
        if ( cuenta == 5 ) // Sie cuenta es 5.
            continue;      // Omite el código restante en el ciclo
        
        cout << cuenta << " ";
    } // Fin de for

    cout << "\nSe uso continue para no imprimir el 5" << endl;
} // Fin de main
