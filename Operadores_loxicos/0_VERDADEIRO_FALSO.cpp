// ZONA DE LIBRERÍAS
#include<iostream>
using namespace std;


// OPERADORES LÓXICOS

/*
    Os valores booleanos son o verdaderos o falsos. 
    C++ os trata como un resultado 1 o 0.
    
    Un valor falso é un valor de ->         0
    Un valor verdadeiro é un valor de ->    1
*/

int main()
{
    bool resultadoCondicion1, resultadoCondicion2; // 
    
    resultadoCondicion1 = 4 > 5; // resultadoCondicion1 = 0 
    resultadoCondicion2 = 10 > 3;// resultadoCondicion2 = 1
    
    
    cout << "O resultado da comparación  4 > 5 é: " << resultadoCondicion1 << endl;
    cout << "O resultado da comparación 10 > 3 é: " << resultadoCondicion2;
    
}

