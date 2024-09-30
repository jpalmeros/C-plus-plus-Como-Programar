// Fig. 5.6: fig05_06.cpp
// Cálculo del interés compuesto con for.
#include <iostream>
#include <iomanip>
#include <math.h> // Biblioteca de matemáticas estándar
using namespace std;

int main()
{
    double monto; // Monto a depositar al final de cada año
    double principal = 1000.0; // Monto inicial antes del interés
    double tasa = .05; // Atasa de interés anual

    // Muestra los encabezados
    cout << "Anio" << setw( 21 ) << "Monto en depósito" << endl;

    // establece el formato de número de punto flotante
    cout << fixed << setprecision( 2 );

    // Calcula el moento en depósito para cada uno de los diez años
    for ( unsigned int anio = 1; anio <= 10; ++anio )
    {
        // calcula el nuevo moento para el año especificado
        monto = principal * pow( 1.0 + tasa, anio );

        // Muestra el año y el moento
        cout << setw( 4) << anio << setw( 21 ) << monto << endl;
    } // fin de for
} // fin de main
