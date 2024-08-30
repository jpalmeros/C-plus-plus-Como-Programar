// Fig. 4.13: LibroCalificaciones.cpp
// Declaraciones de funciones miembro para la clase LibroCalificaciones que resuelve
// el programa del promedio de la clase con repetición controlada por centinela.
#include <ios>
#include <iostream>
#include <iomanip> // Manipuladores de flujo parametrizados
#include "LibroCalificaciones.h" // Incluye la definición de la clase LibroCalificaciones
using namespace std;

// El constructor inicializa a nombreCurso con la cadena que se suministra como argumento
LibroCalificaciones::LibroCalificaciones( string nombre )
{
    establecerNombreCurso( nombre ); // Valida y almacena nombreCurso
} // Fin del constructor de LibroCalificaciones

// Función para establecer el nombre del curso;
// Asegura que el nombre del curso tenga cuando mucho 25 caracteres
void LibroCalificaciones::establecerNombreCurso( string nombre )
{
    if ( nombre.size() <= 25 ) // Si el nombre tiene 25 caracteres o menos
        nombreCurso = nombre; // Almacena el nombre del curso en el objeto
    else // Si el nombre es amyor de 25 caracteres
    { // Establece nombreCurso a los primeros 25 caracteres del parámetro nombre
        nombreCurso = nombre.substr( 0, 25); // Selecciona losprimeros 25 caracteres
        cerr << "El nombre \"" << nombre << "\" excede la longitud maáxima (25).\n"
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
    cout << "Bienvenido al libro de calificaciones para\n" << obtenerNombreCurso() << "!\n"
        << endl;
} // Fin de la función mostrarMensaje

// Determina el promedio de la clase con base en las 10 calificaciones escritas por el usuario
void LibroCalificaciones::determinarPromedioClase() const
{
    // Fase de inicialización
    int total = 0; // Suma de las calificaciones introducidas por el usuario
    unsigned int contadorCalif = 0; // Número de califiacciones introducidas

    // Fase de procesamiento
    // Pide la entrada y lee la calificación del usuario
    cout << "Escriba la calificaión o -1 paar salir: ";
    int calificacion = 0; // Valor de la calificacion
    cin >> calificacion; // Recibe como entrada la calificación o el valor centinela

    // Itera hasta leer el valor centinela del usuario
    while ( calificacion != -1 ) // Mientras calificación no sea -1
    {
        total = total + calificacion; // Suma la calificaión al total
        contadorCalif = contadorCalif + 1; // Incrementa el contador

        // Pide la entrada y lee la siguiente calificaión del usuario
        cout << "Escriba la calificaión o -1 para salir: ";
        cin >> calificacion; // Recibe como entrada la calificaión o el valor centinela
    } // fin del while

    // Fase de terminación
    if ( contadorCalif != 0 ) // Si el usuario introdujo al menos una calificación
    {
        // Calcula el promedio de todas las calificaciones introducidas.
        double promedio = static_cast<double>( total ) / contadorCalif;

        // Muestra el total y el promedio (con dos dígitos de precisión)
        cout << "\nEl total de las " << contadorCalif << " califiaciones introducidas es "
            << total << endl;
        cout << setprecision( 2 ) << fixed;
        cout << "El promedio de la clase es " << promedio << endl;
    } // Fin de if
    else // No se introdujeron califiaciones, por lo que imprime el mensaje apropiado
        cout << "No se introdujeron calificaiones" << endl;
} // Fin de la función determinarPromedioClase
