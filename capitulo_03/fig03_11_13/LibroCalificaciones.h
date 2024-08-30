// Fig. 3.11: LibroCalificaciones.h
// Definición de la clase LibroCalificaciones. Este archivo presenta la interfaz
// public de LibroCalificaciones sin revelar las implementaciones de sus funciones
// miembro, que están definidas en LibroCalificaciones.cpp
#include <string> // La clase LibroCalificaciones utiliza la clase string estándar de C++

// Definición de la clase LibroCalificaciones
class LibroCalificaciones
{
public:
    explicit LibroCalificaciones( std::string ); // Constructor que inicializa a nombreCurso
    void establecerNombreCurso( std::string );   // Establece el nombre del curso
    std::string obtenerNombreCurso() const;      // Obtiene el nombre del curso
    void mostrarMensaje() const;                 // Muestra un mensaje de bienvenida
private:
    std::string nombreCurso;                     // Nombre del curso para este LibroCalificaciones
}; // Fin de la clase LibroCalificaciones