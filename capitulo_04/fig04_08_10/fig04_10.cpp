// Fig. 4.10: fig04_10.cpp
// Crea un objeto LibroCalificaciones e invoca a su función determinarPromedioClase.
#include "LibroCalificaciones.h" // Incluye la definición de la clase LibroCalificaciones

int main()
{
    // Crea un objeto LibroCalificaciones llamado miLibroCalificaciones
    // y pasa el nombre del curso al constructor
    LibroCalificaciones miLibroCalificaciones( "CS101 Programacion en C++" );

    miLibroCalificaciones.mostrarMensaje(); // Muestra el mensaje de bienvenida
    miLibroCalificaciones.determinarPromedioClase(); // Busca el promedio de 10 calificaciones
} // Fin de main
