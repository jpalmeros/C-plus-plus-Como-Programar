// Fig. 3.15: LibroCalificaciones.h
// Definición de la clase LibroClificaciones presenta la interfaz public de la clase.
// Las definiciones de las funciones miembro aparecem en LibroCalificaiones.cpp
#include <string> // El programa usa la clase string estándar de C++

// Definición de la clase LibroCalificaciones
class LibroCalificaciones
{
public:
    explicit LibroCalificaciones( std::string ); // Constructor que inicializa nombreCurso
    void establecerNombreCurso( std::string );   // Establece el nombre del curso
    std::string obtenerNombreCurso() const;      // Obtiene el nombre del curso
    void mostrarMensaje() const;                 // Muestra un mensaje de bienvenida
private:
    std::string nombreCurso; // Nombre del curso para este LibroCalificaciones
}; // Fin de la clase LibroCalificaciones