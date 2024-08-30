// Fig. 3.17: fig03_17.cpp
// Crea y manipula un objeto LibroCalificaciones; ilustra la validación.
#include <iostream>
#include "LibroCalificaciones.h" // Incluye la deficnición de la clase libroCalificaciones
using namespace std;

// La función main empieza la ejecución del programa
int main()
{
    // Crea dos objetos LibroCalificaciones;
    // el nombre inicial del curso de libroCalificaciones1 es demasiado largo
    LibroCalificaciones libroCalificaciones1( "CS101 Introduccion a la programacion en C++" );
    LibroCalificaciones libroCalificaciones2( "CS102 C++:Estruc de datos" );

    // Muestra el nombreCurso de cada LibroCalificaciones
    cout << "el nombre inicial del curso de libroCalificaciones1 es: "
        << libroCalificaciones1.obtenerNombreCurso()
        << "\nel nombre inicial del curso de libroCalificaciones2 es: "
        << libroCalificaciones2.obtenerNombreCurso() << endl;

    // Modifica el nombreCurso de libroCalificaciones1 (con una cadema con longitud válida).
    libroCalificaciones1.establecerNombreCurso("CS101 Programacion en C++");

    // Muestra el nombreCurso de cada LibroCalificaciones
    cout << "\nEl nombre del curso de libroCalificaciones1 es: "
        << libroCalificaciones1.obtenerNombreCurso()
        << "\nel nombre del curso de libroCalificaciones2 es: "
        << libroCalificaciones2.obtenerNombreCurso() << endl;
} // fin de main
