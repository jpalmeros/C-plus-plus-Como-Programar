// Fig. 3.16: LibroCalificaciones.cpp
// Implementaciones de las definiciones de las funciones miembro de LibroCalificaciones
// La función establecerNombreCurso realiza la validación.
#include <iostream>
#include "LibroCalificaciones.h" // Incluye la definición de la clase LibroCalificaciones
using namespace std;

// El constructor inicializa nombreCurso con la cadena que se suministra como argumento
LibroCalificaciones::LibroCalificaciones( string nombre )
{
    establecerNombreCurso( nombre ); // valida y almacena nombreCurso
} // Fin del constructor de LibroCalificaciones

// Función que establece el nombre del curso
// Asegura que el nombre del curso tenga como máximo 25 caracteres
void LibroCalificaciones::establecerNombreCurso( string nombre )
{
    if (nombre.size() <= 25 ) // Si nombre tiene 25 caracteres o menos
        nombreCurso = nombre; // Almacena el nombre del curso en el objeto
    
    if ( nombre.size() > 25 ) // Si nombre tiene más de 25 caracteres
    {
        // Establece nombreCurso a los primeros 25 caracteres del parametro nombre
        nombreCurso = nombre.substr( 0, 25 ); // Empieza rn 0, longitud de 25

        cerr << "El nombre \"" << nombre << "\" excede la longitud máxima (25).\n"
            "Se limito nombreCurso a los primeros 25 caracteres,\n" << endl; 
    } // fin de if
} // fin de la función estabecerNombreCurso

// Función para obtener el nombre del curso
string LibroCalificaciones::obtenerNombreCurso() const
{
    return nombreCurso; // Devuelve el nombreCurso del objeto
} // Fin de la función obtenerNombreCurso

// Muestra un mensaje de bienvenida al usuario de LibroCalificaciones
void LibroCalificaciones::mostrarMensaje() const
{
    // llama a obtenerNombreCurso para obtener el nombreCurso
    cout << "Bienvenido al libro de calificaciones para\n" << obtenerNombreCurso()
        << "!" << endl;
} // Fin de la función mostrarMensaje