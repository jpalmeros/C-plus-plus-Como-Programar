// Fig. 5.2: fig05_02.cpp
// Repetición controlada por contador con la instrucción for.
#include <iostream>
using namespace std;

int main()
{
    // El encabezado de la instrucción for incluye la inicialización
    // la condición de continuación del ciclo y el incremento.
    for ( unsigned int contador = 1; contador <= 10; ++contador )
        cout << contador << " ";

    cout << endl; // Imprime una nueva línea
} // Fin de main
