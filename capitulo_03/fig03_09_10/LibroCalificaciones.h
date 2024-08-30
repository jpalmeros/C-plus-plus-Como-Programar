// Fig. 3.9: LibroCalificaciones.h
// Definición de la clase LibroCalificaciones en un archivo separado de main.
#include <iostream>
#include <string>

// Definición de la clase LibroCalificaciones
class LibroCalificaciones
{
private:
    std::string nombreCurso; // nombre del curso para este LibroCalificaciones
public:
    // El constructor inicializa nombreCurso con la cadena que se suministra como argumento
    explicit LibroCalificaciones( std::string nombre )
        : nombreCurso( nombre ) // Inicializador de miembro para inicializar nombreCurso
        {
            // Cuerpo vacío
        } // Fin del constructor de LibroCalificaciones

        // Función para establecer el nombre del curso
        void establecerNombreCurso( std::string nombre )
        {
            nombreCurso = nombre; // Almacena el nombre del curso en el objeto
        } // Fin de la función establecerNombreCurso

        // Función para obtener el nombre del curso
        std::string obtenerNombreCurso() const
        {
            return nombreCurso; // Devuelve el nombreCurso del objeto
        } // Fin de la función obtenerNombreCurso

        // Muestra un mensaje de bienvenida al usuario de LibroCalificaciones
        void mostrarMensaje() const
        {
            // Llama a obtenerNombreCurso para obtener el nombreCurso
            std::cout << "Bienvenido al libro de calificaciones para\n" << obtenerNombreCurso()
                << "!" << std::endl;
        } // Fin de la función mostrarMensaje
}; // Fin de la clase LibroCalificaciones
