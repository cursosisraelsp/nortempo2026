#include <iostream>
#include <cmath> // Librería para la función pow(), sqrt()
#include "funcions.h"
#define PI 3.1416       // Define una constante de texto

using namespace std;




void programaSuma(){
    
    int sumaEnteros;
    float sumaReales;
    
    sumaEnteros = SumaEnteros();
    sumaReales = SumaReales();
    
   cout << "O valor da suma con enteiros é: " << sumaEnteros << endl;
   cout << "O valor da suma con reais é: " << sumaReales << endl;
}

int SumaEnteros(){
    // VARIABLES DE ENTRADA
    
    int numero1 = 0;
    int numero2 = 0;
    
    cout << "Ingresa primer numero entero : " << endl;
    cin >> numero1;
    
    cout << "Ingresa segundo numero entero: " << endl;
    cin >> numero2;
    
    
     
   return numero1 + numero2; 
}

float SumaReales(){
     // ### 
    
    float numero1Real = 0;
    float numero2Real = 0;
    
    cout << "Ingresa primer numero real : ";
    cin >> numero1Real;
    
    cout << "Ingresa segundo numero real : ";
    cin >> numero2Real;
    
    return numero1Real + numero2Real;
}