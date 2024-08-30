// Fig. 4.8: LibroCalificaciones.h
// Definición de la clase LibroCalificaciones que determina el promedio de una clase.
// Las funciones miembro se definen en LibroCalificaciones.cpp
#include <string> // El programa usa la clase string estándar de C++

// Definición de la clae LibroCalificaciones
class LibroCalificaciones
{
public:
    explicit LibroCalificaciones( std::string ); // Inicializa el nombre del curso.
    void establecerNombreCurso( std::string );   // Establece el nombre del curso.
    std::string obtenerNombreCurso() const;      // Obtener el nombre del curso.
    void mostrarMensaje() const;                 // Muestra un mensaje de bienvenida.
    void determinarPromedioClase() const;        // Promedia las calificaciones escritas por el usuario.
private:
    std::string nombreCurso; // Nombre del curso para este LibroCalificaciones.
}; // Fin de la clase LibroCalificaciones.