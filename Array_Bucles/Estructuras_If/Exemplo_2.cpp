// Ejercicio 2: Determinar si un número es positivo, negativo o cero.
/*
- numero > 0
- numero <= 0
*/
#include <iostream>
using namespace std;

int main(){
   float numero;

   // Leo numero por consola

   cout << "Introduce número : " ;
   cin >> numero;


    if(numero > 0){
        cout << "Numero +";
    }else if(numero < 0){
        cout << "Numero -";
    }else {
        cout << "Es cero";
    }

    return 0;

}