// Fig. 5.5: fig05_05.cpp
// Suma de enteros con la instrucción for.
#include <iostream>
using namespace std;

int main()
{
    unsigned int total = 0; // Inicializa el total

    // Obtiene el total de los enteros pares del 2 al 20
    for ( unsigned int numero = 2; numero <= 20; numero += 2 )
        total += numero;

    cout << "La suma es " << total << endl; // Muestra los resultados
} // Find de main
