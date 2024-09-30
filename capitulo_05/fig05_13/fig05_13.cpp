// Fig. 5.13: fig05_13.cpp
// Instrucción break para salir de una instrucción for.
#include <iostream>
using namespace std;

int main()
{
    unsigned int cuenta; // La variable de control también se usa después de que termina el ciclo

    for ( cuenta = 1; cuenta <= 10; ++cuenta ) // Itera 10 veces
    {
        if ( cuenta == 5 )
            break; // Termina el ciclo sólo si cuenta es 5

        cout << cuenta << " ";
    } // Fin de for

    cout << "\nSalió del ciclo en cuenta = " << cuenta << endl;
} // Fin de main
