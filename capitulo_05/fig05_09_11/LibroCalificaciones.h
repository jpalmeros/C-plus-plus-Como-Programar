// Fig. 5.9: LibroCalificaciones.h
// Definición de la clase LibroCalificaciones que cuenta calificaciones de letras.
// Las funciones miembro se definen en LibroCalificaciones.cpp
#include <string> // El programa usa la clas string estándar de C++

// Definición de la clase LibroCalificaciones
class LibroCalificaciones
{
public:
    explicit LibroCalificaciones( std::string ); // Inicializa el nombre del curso
    void establecerNombreCurso( std::string );   // Establece el nombre del curso
    std::string obtenerNombreCurso() const;      // Obtiene el nombre del curso
    void mostrarMensaje() const;                 // Muestra un mensaje de bienvenida
    void recibirCalificaciones(); // Recibe un número arbitrario de calificaciones del usuario
    void mostrarReporteCalificaciones() const; // Muestra un reporte con base en la entrada del usuario
private:
    std::string nombreCurso; // Nombre del curso para este LibroCalificaciones
    unsigned int aCuenta; // Cuenta de calificaciones A
    unsigned int bCuenta; // Cuenta de calificaciones B
    unsigned int cCuenta; // Cuenta de calificaciones C
    unsigned int dCuenta; // Cuenta de calificaciones D
    unsigned int fCuenta; // Cuenta de calificaciones D
}; // Fin de la clase LibroCalificaciones
