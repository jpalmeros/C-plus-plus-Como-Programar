// Fig. 5.7: fig05_07.cpp
// La instrucción de repetición do...while.
#include <iostream>
using namespace std;

int main()
{
    unsigned int contador = 1; // Inicializa contador

    do
    {
        cout << contador << " "; // Muestra contador
        ++contador; // Incrementa contador
    } while ( contador <= 10 ); // Fin de do...while

    cout << endl; // Imprime una nueva línea
} // Fin de main
