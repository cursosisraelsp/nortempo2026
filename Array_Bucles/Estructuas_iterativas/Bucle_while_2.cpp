#include <iostream>
using namespace std;

int main() {
    int numero;
    int condicion;
    cout << "Introduce un número (0 para salir) desde fuera del bucle: ";
    cin >> numero;
    while (numero != 0) {
        cout << "Ingresaste: " << numero << endl;
        cout << "Introduce otro número (0 para salir): ";
        cin >> numero;
        condicion = (numero != 0) ;
        cout << "Valor de condición: " << condicion << endl;
    }
    return 0;
}
