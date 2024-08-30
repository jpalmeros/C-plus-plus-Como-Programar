// Fig. 3.12: LibroCalificaciones.cpp
// Definiciones de las funciones miembro de LibroCalificaciones. Este archivo contiene
// implementaciones de las funciones miembro cuyo prototipo está en LibroCalificaciones.h
#include <iostream>
#include "LibroCalificaciones.h" // Incluye la definición de la clase LibroCalificaciones
using namespace std;

// El constructor inicializa nombreCurso con el objeto string suministrado como argumento
LibroCalificaciones::LibroCalificaciones( string nombre )
    : nombreCurso( nombre ) // Inicializador de miembro para inicializar nombreCurso
{
    // Cuerpo vacío
} // Fin del constructor de LibroCalificaciones

// Función para establecer el nombre del curso
void LibroCalificaciones::establecerNombreCurso( string nombre )
{
    nombreCurso = nombre; // Alamacena el nombre del curso en el objeto
} // Fin de la función establecerNombreCurso

// Función para obtener el nombre del curso
string LibroCalificaciones::obtenerNombreCurso() const
{
    return nombreCurso; // Devuelve el nombreCurso del objeto
} // Fin de la función obtenerNombreCurso

// Muestra un mensaje de bienvenida al usuario de LibroCalificaciones
void LibroCalificaciones::mostrarMensaje() const
{
    // Llama a obtenerNombreCurso para obtener el nombreCurso
    cout << "Bienvenido al libro de calificaciones para\n" << obtenerNombreCurso()
        << "!" << endl;
} // Fin de la función mostrarMensaje