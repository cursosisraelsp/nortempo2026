// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
using namespace std;

// DECLARACIÓN DE FUNCIONES

int Suma(int valor1, int valor2);
int Resta(int valor1, int valor2);

/*
    Unha función é usada as veces que queiramos.
    Neste caso estamos usándoa 3 veces de diferentes formas
*/
int main()
{
    // Declaración de variables
    int resultado = 0; // INICIALIZO RESULTADO A 0
    int valor1 = 0;
    int valor2 = 0;
    
    resultado = Resta(8,3);
    valor1 = resultado;// 5
    cout << "O resultado da resta é: " << resultado << endl;
    
    
    resultado = Resta(18,3);// 15
    valor2 = resultado;
    cout << "O resultado da segunda resta é: " << resultado << endl;
    
    resultado = Suma(valor1, valor2);//5 + 15 = 20
    cout << "O resultado da suma é: " << resultado;
    
}


// ZONA DE FUNCIÓNS

int Suma(int valor1, int valor2){
    
    return valor1 + valor2;
}

int Resta(int valor1, int valor2){
    return valor1 - valor2;
}