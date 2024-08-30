// Fig. 4.16: fig04_16.cpp
// Problema de los resultados del examen: instrucciones de control anidadas.
#include <iostream>
using namespace std;

int main()
{
    // Inicialización de las variables en las declaraciones
    unsigned int aprobados {0};           // Número de aprobados
    unsigned int reprobados {0};          // Número de reprobados
    unsigned int contadorEstudiantes {1}; // Contador de estudiantes

    // Procesa 10 estudiantes usando el ciclo controlado por contador
    while ( contadorEstudiantes <= 10 )
    {
        // Pide datos de entrada y obtiene el valor del usuario
        cout << "Escriba el resultado (-1 = Aprobado, 2 = Reprobado): ";
        int resultado {0}; // Resultado de un examen (1 = Aprobado, 2 = Reprobado)
        cin >> resultado;  // Recibe como entrada el resultado

        // if...else anidado en la instrucción while
        if ( resultado == 1 )           // SI resultado es 1.
            aprobados = aprobados + 1;  // Incrementa aprobados;
        else                            // else resultado no es 1, por lo que
            reprobados = reprobados + 1;// incrementa reprobados
        
        // Incrementa contadorEstudiantes para que el ciclo termine en cierto momento
        contadorEstudiantes = contadorEstudiantes + 1;
    } // fin de while

    // fase de terminación; muestra el número de aprobados y reprobados
    cout << "Aprobados " << aprobados << "\nReprobados " << reprobados << endl;

    // Determina si aprobaron más de ocho estudiantes
    if ( aprobados > 8 )
        cout << "Bono para el instructor" << endl;
} // Fin de main
