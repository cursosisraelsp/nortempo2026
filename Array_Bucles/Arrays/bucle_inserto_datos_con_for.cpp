// Imprimir los números de 0 a 10
#include <iostream>
#define MAX_SIZE 5
using namespace std;

int main() {
    int contador;
    float nota;
    float notas [MAX_SIZE];

    for (contador = 0; contador < MAX_SIZE; contador++) {
        cout << "Inserte nota : " ;
        cin >> nota;
        notas[contador] = nota;
    }
   cout << endl;
    for (contador = 0; contador < MAX_SIZE; contador++) {
        cout << "A nota ingresada en nota[" << contador <<"] es: " << notas[contador] << endl;
    }


    return 0;
}