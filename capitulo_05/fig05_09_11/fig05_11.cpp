// Fig. 05.11: fig05_11.cpp
// Creación de un objeto LibroCalificaciones e invocación de sus funciones miembro.
#include "LibroCalificaciones.h" // Incluye la definición de la clase LibroCalificaciones

int main()
{
    // Crea un objeto LibroCalificaciones
    LibroCalificaciones miLibroCalificaciones( "CS101 Programación en C++" );

    miLibroCalificaciones.mostrarMensaje(); // Muestra el mensaje de bienvenida
    miLibroCalificaciones.recibirCalificaciones(); // Lee las calificaciones del usuario
    miLibroCalificaciones.mostrarReporteCalificaciones(); // Muestra el reporte con base en las calificaciones
} // Fin de main
