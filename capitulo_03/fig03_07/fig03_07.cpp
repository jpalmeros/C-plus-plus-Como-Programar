// Fig. 3.7: fig03_07.cpp
// Creación de instancias de varios objetos de la clase LibroCalificaciones y uso
// de su constructor para especificar el nombre del curso
// cuando se crea cada objeto LibroCalificaciones.
#include <iostream>
#include <string>
using namespace std;

// Definición de la clase LibroCalificaciones
class LibroCalificaciones
{
private:
    string nombreCurso;
public:
    // El constructor inicializa a nombreCurso con la cadena que se suministra como argumento
    explicit LibroCalificaciones( string nombre )
        : nombreCurso ( nombre ) // Inicializador de miembro para inicializar nombreCurso
    {
        // Cuerpo vacío
    } // Fin del constructor de LibroCalificaciones

    void establecerNombreCurso( string nombre )
    {
        nombreCurso = nombre; // Almacena el nombre del curso en el objeto
    } // Fin de la función establecerNombreCurso

    string obtenerNombreCurso() const
    {
        return nombreCurso; // Devuelve el nombreCurso del objeto
    } // Fin de la función obtenerNombreCurso

    // Muestra un mensaje de bienvenida para el usuario de LibroCalificaciones
    void mostrarMensaje() const
    {
        // Llama a obtenerNombreCurso para obtener el nombreCurso
        cout << "Bienvenido al libro de calificaciones para\n" << obtenerNombreCurso()
            << "!" << endl;
    } // Fin de la funcion mostrarMensaje
};

int main()
{
    // Crea dos objetos LibroCalificaciones
    LibroCalificaciones libroCalificaciones1( "CS101 Introducción a la programación en C++" );
    LibroCalificaciones libroCalificaciones2( "CS102 Estructuras de datos en C++" );

    // Muestra el valor inicial de nombreCurso para cada LibroCalificaciones
    cout << "libroCalificaciones1 se creó para el curso: " << libroCalificaciones1.obtenerNombreCurso()
        << "\nlibroCalificaciones2 se creó para el curso: " << libroCalificaciones2.obtenerNombreCurso()
        << endl;
} // Fin de main