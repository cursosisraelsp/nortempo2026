// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
using namespace std;

// DECLARACIÓN DE FUNCIONES

int Suma(int valor1, int valor2);


/*
    Unha función é usada as veces que queiramos.
    Neste caso estamos usándoa 3 veces de diferentes formas
*/
int main()
{
    // Declaración de variables
    int resultado = 0; // INICIALIZO RESULTADO A 0
    int valorA = 3;
    int valorB = 14;
    
    // PROGRAMA
    // UTILIZAMOS UNA VEZ LA FUNCIÓN SUMA
    resultado = Suma(valorA,valorB); // UTILIZAMOS UNHA VARIABLE PARA ALAMACENAR O RESULTADO DA SUMA
    
    cout << "A primeira Suma é: " << resultado << endl;
    
    // UTILIZAMOS POR SEGUNDA VEZ LA FUNCIÓN SUMA
    
    resultado = Suma(56,87);
    cout << "A segunda vez Suma é: " << resultado << endl;
    
    // UTILIZAMOS POR TERCERA VEZ LA FUNCIÓN SUMA
    
    resultado = Suma(56 + valorA,87 + valorB);
    cout << "A terceira vez Suma é: " << resultado;
}

int Suma(int valor1, int valor2){
    
    return valor1 + valor2;
}