// Fig. 3.13: fig03_13.cpp
// Demostración de la clase LibroCalificaciones después
// de separar su interfaz de su implementación
#include <iostream>
#include "LibroCalificaciones.h" // Incluye la definición de la clase LibroCalificaciones
using namespace std;

// La función main empieza la ejecución del programa
int main()
{
    // Crea dos objetos LibroCalificaciones
    LibroCalificaciones libroCalificaciones1( "CS101 Introduciión a la programación en C++" );
    LibroCalificaciones libroCalificaciones2( "CS102 Estructuras de datos en C++" );

    // Muestra el valor inicial de nombreCurso para cada LibroCalificaciones
    cout << "libroCalificaciones1 creado para el curso: " << libroCalificaciones1.obtenerNombreCurso()
        << "\nlibroCalificaciones2 creado para el curso: " << libroCalificaciones2.obtenerNombreCurso()
        << endl;
} // Fin de main
