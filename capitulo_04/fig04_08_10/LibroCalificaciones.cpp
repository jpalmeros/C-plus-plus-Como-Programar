// Fig. 4.9: LibroCalificaciones.cpp
// Definiciones de funciones miembro para la clase LibroCalificaciones que resuelve
// el programa del promedio de la clase con repetición controlada por contador.
#include <iostream>
#include "LibroCalificaciones.h" // Incluye la definición de la clase LibroCalificaciones
using namespace std;

// El constructor inicializa a nombreCurso con la cadena que se suministra como argumento
LibroCalificaciones::LibroCalificaciones( string nombre )
{
    establecerNombreCurso( nombre ); // Valida y almacena nombreCurso
} // Fin del constructor de LibroCalificaciones

// Función para establecer el nombre del curso;
// Asegura que el nombre del curso tenga cuando menos 25 caracteres.
void LibroCalificaciones::establecerNombreCurso( string nombre )
{
    if ( nombre.size() <= 25 ) // Si nombre tiene 25 caracteres o menos
        nombreCurso = nombre; // Almacena el nombre del curso en el objeto.
    else // Si nombre es mayor a 25 caracteres
    {   // Establece nombreCurso a los primeros 25 caracteres del parametro nombre.
        nombreCurso = nombre.substr( 0, 25 ); // Selecciona los primeros 25 caracteres.
        cerr << "El nombre \"" << nombre << "\" excede la longitud máxima (25).\n"
            << "Se limito nombreCurso a los primeros 25 caracteres.\n" << endl; 
    } // Fin de if...else
} // Fin de la función establecerNombreCurso

// Función para obtener el nombre del curso
string LibroCalificaciones::obtenerNombreCurso() const
{
    return nombreCurso;
} // Fin de la función obtenerNombreCurso

// Muestra un mensaje de bienvenida al usuario de LibroCalificaciones
void LibroCalificaciones::mostrarMensaje() const
{
    cout << "Bienvenidos al libro de calificaciones para \n" << obtenerNombreCurso() << "!\n"
        << endl;
} // Fin de la función mostrarMensaje

// Determina el promedioa de la clase, con base en las 10 calificaciones escritas por el usuario
void LibroCalificaciones::determinarPromedioClase() const
{
    // fase de inicialización
    int total {0}; // Suma de las calificaciones introducidas por el usuario
    unsigned int contadorCalif = 1; // Número de la calificación a introducir a continuación

    // fase de procesamiento
    while ( contadorCalif <= 10 ) // Itera 10 veces
    {
        cout << "Escriba una calificación: "; // Pide la entrada
        int calificacion {0}; // Valor de la calificación introducida por el usuario
        cin >> calificacion; // Recibe como entrada la siguiente calificación
        total = total + calificacion; // Suma la calificacion al total
        contadorCalif = contadorCalif + 1; // Incrementa el contador por 1
    } // Fin del while

    // Fase de terminación
    int promedio = total / 10; // Está bien mezclar la declaración con el cálculo

    // Muestra el total y el promedio de las calificaciones
    cout << "\nEl total de las 10 calificaciones es: " << total << endl;
    cout << "El promedio de la clase es " << promedio << endl;
} // Fin de la función determinarPromedioClase
