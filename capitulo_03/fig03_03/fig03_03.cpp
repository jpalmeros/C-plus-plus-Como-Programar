// Fig. 3.3: fig03_03.cpp
// Define la clase LibroCalificaciones con una función miembro que recibe un parámtero.
// Crea un objeto LibroCalificaciones y llama a su función mostrarMensaje.
#include <iostream>
#include <string> // el programa usa la clase string estándar de C++
using namespace std;

// definición de la clase LibroCalificaciones
class LibroCalificaciones
{
    public:
    // Función que muestra un mensaje de bienvenida para el usuario de LibroCalificaciones
    void mostrarMensaje( string nombreCurso ) const
    {
        cout << "Bienvenido al libro de calificaciones para\n" << nombreCurso << "!" << endl;
    } // fin de la función mostrarMensaje
};

// la función main empieza la ejecución del programa
int main()
{
    string nombreDelCurso; // cadena de caracteres que almacena el nombre del curso
    LibroCalificaciones miLibroCalificaciones; // Crea un objeto LibroCalificaciones llamado miLibroCalificaciones

    // Pide y recibe el nombre del curso como entrada
    cout << "Escriba el nombre del curso: " << endl;
    getline( cin, nombreDelCurso ); // lee el nombre de un curso con espacios en blanco

    cout << endl; // Imprime una línea en blanco

    // Llama a la función mostrarMensaje de miLibroCalificaciones
    // y pasa nombreDelCurso como argumento.
    miLibroCalificaciones.mostrarMensaje( nombreDelCurso );
} // fin del main
