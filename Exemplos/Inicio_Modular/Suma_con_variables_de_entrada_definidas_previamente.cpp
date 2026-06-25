// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>

using namespace std;

// DECLARACIÓN DE FUNCIONES

int Suma(int valor1, int valor2);

int main()
{
    // Declaración de variables
    int resultado = 0; // INICIALIZO RESULTADO A 0
    int valorA = 3;
    int valorB = 14;
    
    // PROGRAMA
    
    resultado = Suma(valorA,valorB); // UTILIZAMOS UNHA VARIABLE PARA ALAMACENAR O RESULTADO DA SUMA
    
    cout << "A Suma é: " << resultado;
}

int Suma(int valor1, int valor2){
    
    return valor1 + valor2;
}