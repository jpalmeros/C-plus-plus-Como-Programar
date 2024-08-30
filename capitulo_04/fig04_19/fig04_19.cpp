// Fig. 4.19: fig04_19.cpp
// Preincremento y postincremento.
#include <iostream>
using namespace std;

int main()
{
    // Demuestra el postincremento
    int c {5}; // Asigna 5 a c
    cout << c << endl;    // Imprime 5
    cout << c++ << endl;  // Imprime 5 y después post incrementa
    cout << c << endl;    // Imprime 6

    cout << endl;         // Salta una línea

    // Demuestra el preincremento
    c = 5; // Asigna 5 a c
    cout << c << endl;   // Imprime 5
    cout << ++c << endl; // preincrementa y después imprime 6
    cout << c << endl;   // Imprime 6
} // Fin de main
