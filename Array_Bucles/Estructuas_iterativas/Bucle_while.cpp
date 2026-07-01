// cargamos las librerías

#include <iostream>
using namespace std;

int main(){
    int contador = 1;

    while (contador <= 5) {
        cout << "Contador dentro del bucle : " << contador << endl;
        contador++;// Aquí llega a 6
    }
    cout << "Contador fuera del bucle: " << contador << endl;
}

