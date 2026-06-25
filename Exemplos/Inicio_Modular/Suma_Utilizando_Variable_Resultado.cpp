// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>

using namespace std;

// DECLARACIÓN DE FUNCIONES

int Suma();

int main()
{
    // Declaración de variables
    int resultado = 0; // INICIALIZO RESULTADO A 0
    
    resultado = Suma(); // UTILIZAMOS UNHA VARIABLE PARA ALAMACENAR O RESULTADO DA SUMA
    
    cout << "A Suma é: " << resultado;
}

int Suma(){
    
    return 3 + 14;
}