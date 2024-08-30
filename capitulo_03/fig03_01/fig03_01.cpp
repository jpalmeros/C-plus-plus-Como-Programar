// Fig. 3.1: fig03_01.cpp
// Define la clase LibroCalificaciones con una función miembro llamada mostrarMensaje
// Crea un objeto LibroCalificaciones y llama a su función mostrarMensaje
#include <iostream>
using namespace std;

// Definición de la clase LibroCalificaciones
class LibroCalificaciones
{
public:
    // función que muestra un mensaje de bienvenida para el usuario de LibroCalificaciones
    void mostrarMensaje() const
    {
        cout << "Bienvenido al Libro de calificaciones!" << endl;
    } // fin de la función mostrarMensaje
}; // fin de la clase LibroCalificaciones

// la función main empieza la ejecución del programa
int main()
{
    LibroCalificaciones miLibroCalificaciones; // crea un objeto LibroCalificaciones llamado miLibroCalificaciones
    miLibroCalificaciones.mostrarMensaje(); // llama a la funciónmostrarMensaje del objeto
} // fin de main
