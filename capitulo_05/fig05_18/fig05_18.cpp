// Fig. 5.18: fig05_18.cpp
// Operadores lógicos
#include <iostream>
using namespace std;

int main()
{
    // Crea la tabla de verdad para el operador && (AND lógico)
    cout << boolalpha << "AND lógico (&&)"
        << "\nfalse && false: " << ( false && false )
        << "\nfalse && true:  " << ( false && true )
        << "\ntrue  && false: " << ( true && false )
        << "\ntrue  && true:  " << ( true && true ) << "\n\n";

    // Crea la tabla de verdad para el operador || (OR lógico)
    cout << "OR lógico (||)"
        << "\nfalse && false: " << ( false || false )
        << "\nfalse && true:  " << ( false || true )
        << "\ntrue  && false: " << ( true || false )
        << "\ntrue  && true:  " << ( true || true ) << "\n\n";

    // Crea la tabla de verdad para el operador ! (negación l+ogica)
    cout << "NOT lógico (!)"
        << "\n!false: " << ( !false )
        << "\n!true:  " << ( !true ) << endl;
} // Fin de main
