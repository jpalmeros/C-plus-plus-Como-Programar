// Fig. 5.1: fig05_01.cpp
// Repetición controlada por un contador.
#include <iostream>
using namespace std;

int main()
{
    unsigned int contador = 1; // Declara e inicializa la variable de control

    while ( contador <= 10 ) // Condición de continuación de ciclo
    {
        cout << contador << " ";
        ++contador; // Incrementa la variable de control en 1
    } // Fin de while

    cout << endl; // Imprime una nueva línea
} // Fin de main
