#include <iostream>
using namespace std;

int main() {
    int grado;
    char seccion;
    int num_estudiantes;
    float altura, suma_alturas = 0, promedio;

    // 1. Solicitar datos de grado, seccion y numero de estudiantes
    cout << "Ingrese el grado: ";
    cin >> grado;
    
    cout << "Ingrese la seccion (una letra): ";
    cin >> seccion;
    
    cout << "Ingrese el numero de estudiantes: ";
    cin >> num_estudiantes;
    
    // 2. Solicitar las estaturas y calcular el promedio
    for (int i = 0; i < num_estudiantes; i++) {
        cout << "Ingrese la estatura del estudiante " << i + 1 << ": ";
        cin >> altura;
        suma_alturas += altura;
    }
    
    // Calcular el promedio
    promedio = suma_alturas / num_estudiantes;

    // 3. Imprimir el promedio
    cout << "El promedio de las estaturas del grado " << grado << " seccion " << seccion << " es: " << promedio << " metros." << endl;

    return 0;
}
