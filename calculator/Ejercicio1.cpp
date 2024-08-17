#include <iostream>
using namespace std;

int main() {
    int option;
    double num1, num2, result;

    do {
        // Mostrar el menú
        cout << "=======================" << endl;
        cout << "| Menu de operaciones |" << endl;
        cout << "=======================\n" << endl;
        cout << "0. Salir" << endl;
        cout << "1. Suma" << endl;
        cout << "2. Resta" << endl;
        cout << "3. Multiplicacion" << endl;
        cout << "4. Division" << endl;
        cout << "Digite la opcion: ";
        cin >> option;

        // Verificar si la opción es para salir
        if (option == 0) {
            cout << "Saliendo del programa..." << endl;
            break;
        }

        // Validar opción correcta
        if (option < 0 || option > 4) {
            cout << "Opcion invalida. Intente nuevamente." << endl;
            continue; // Reiniciar el ciclo
        }

        // Solicitar los números
        cout << "Digite el primer numero: ";
        cin >> num1;
        cout << "Digite el segundo numero: ";
        cin >> num2;

        // Resolver la operación según la opción
        switch(option) {
            case 1:
                result = num1 + num2;
                cout << "Resultado de la suma: " << result << endl;
                break;
            case 2:
                result = num1 - num2;
                cout << "Resultado de la resta: " << result << endl;
                break;
            case 3:
                result = num1 * num2;
                cout << "Resultado de la multiplicacion: " << result << endl;
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << "Resultado de la division: " << result << endl;
                } else {
                    cout << "Error: Division por cero no permitida." << endl;
                }
                break;
        }
    } while(option != 0);

    return 0;
}
