// Fig. 5.10: LibroCalificaciones.cpp
// Definiciones de las funciones miembro para la clase LibroCalificaciones que
// utiliza una instrucción switch para contar calificaciones A, B, C, D y F.
#include <iostream>
#include "LibroCalificaciones.h" // Incluye la definición de la clase LibroCalificaciones
using namespace std;

// El constructor inicializa nombreCurso con la cadena suministrada como
// argumento: inicializa los miembros de datos contadores a 0
LibroCalificaciones::LibroCalificaciones( string nombre )
    : aCuenta( 0 ), // Inicializa cuenta de calificaciones A con 0
      bCuenta( 0 ), // Inicializa cuenta de calificaciones B con 0
      cCuenta( 0 ), // Inicializa cuenta de calificaciones C con 0
      dCuenta( 0 ), // Inicializa cuenta de calificaciones D con 0
      fCuenta( 0 )  // Inicializa cuenta de calificaciones F con 0
{
    establecerNombreCurso( nombre );
} // Fin del constructor de LibroCalificaciones

// Función para establecer el nombre del curso; limita el nombre a 25 caracteres o menos
void LibroCalificaciones::establecerNombreCurso( string nombre )
{
    if ( nombre.size() <= 25 ) // Si nombre tiene 25 caracteres o menos
        nombreCurso = nombre; // Almacena el nombre del curso en el objeto
    else // Si el nombre es mayor que 25 caracteres
    { // Establece nombreCurso a los primeros 25 caracteres del parametro nombre
        nombreCurso = nombre.substr( 0, 25 ); // Selecciona los primeros 25 caracteres
        cerr << "El nombre \"" << nombre << "\" excede la longitud máxima (25).\n"
            << "Se limitó nombreCurso a los primeros 25 caracteres.\n" << endl;
    } // fin de if...else
} // fin de la función establecerNombreCurso

// Función para obtener el nombre del curso
string LibroCalificaciones::obtenerNombreCurso() const
{
    return nombreCurso;
} // Fin de la función obtenerNombreCurso

// Muestra un mensaje de bienvenida para el usuario de LibroCalificaciones
void LibroCalificaciones::mostrarMensaje() const
{
    // Esta instrucción llama a obtenerNombreCurso para obtener el
    // nombre del curso que representa este LibroCalificaciones
    cout << "Bienvenido al libro de calificaciones para\n" << obtenerNombreCurso() << "!\n"
        << endl;
} // Fin de la función mostrarMensaje

// Recibe un número arbitrario de calificaciones del usuario; actualiza el contador de calificaciones
void LibroCalificaciones::recibirCalificaciones()
{
    int calificacion; // Calificacion introducida por el usuario

    cout << "Escriba las calificaciones de letra." << endl
        << "Escriba el caracter EOF (ctrl-D) para terminar la entrada." << endl;
    
    // Itera hasta que el usuario escriba la secuencia de fin de archivo
    while ( ( calificacion = cin.get() ) != EOF )
    {
        // Determina cual calificación se introdujo
        switch ( calificacion ) // Instrucción switch anidad en el while
        {
            case 'A':      // Calificación fue A mayúscula
            case 'a':      // o a minúscula
                ++aCuenta; // Incrementa aCuenta
                break;     // es necesario salir del switch
            
            case 'B':      // Calificaión fue B mayúscula
            case 'b':      // o b minúscula
                ++bCuenta; // Incrementa bCuenta 
                break;     // sale del switch
            
            case 'C':      // Calificaión fue C mayúscula
            case 'c':      // o c minúscula
                ++cCuenta; // Incrementa cCuenta 
                break;     // sale del switch
            
            case 'D':      // Calificaión fue D mayúscula
            case 'd':      // o d minúscula
                ++dCuenta; // Incrementa dCuenta 
                break;     // sale del switch
            
            case 'F':      // Calificaión fue F mayúscula
            case 'f':      // o f minúscula
                ++fCuenta; // Incrementa fCuenta 
                break;     // sale del switch
            
            case '\n': // Ignora caracteres de nueva línea.
            case '\t': // Tabuladores
            case ' ':  // Y espacios en la entrada
                break; // Sale del switch
            
            default: // Atrapa todos los demás caracteres
                cout << "Se introdujo una letra de calificación incorrecta."
                    << " Escriba una nueva calificación." << endl;
                break; // Opcional; Saldrá del switch de todas formas
        } // Fin de switch
    } // Fin de while
} // Fin de la función recibirCalificaciones

// Muestra un reporte con base en las calificaciones introducidas por el usuario
void LibroCalificaciones::mostrarReporteCalificaciones() const
{
    // Imprime resumen de resultados
    cout << "\n\nNúmero de estudiantes que recibieron cada calificación de letra:"
        << "\nA: " << aCuenta // muestra el número de calificaciones A
        << "\nB: " << bCuenta // muestra el número de calificaciones B
        << "\nC: " << cCuenta // muestra el número de calificaciones C
        << "\nD: " << dCuenta // muestra el número de calificaciones D
        << "\nF: " << fCuenta // muestra el número de calificaciones F
        << endl;
} // Fin de la función mostrarReporteCalificaciones