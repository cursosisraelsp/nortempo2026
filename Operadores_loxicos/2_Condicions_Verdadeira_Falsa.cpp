// ZONA DE LIBRERÍAS
#include<iostream>
using namespace std;


// OPERADORES LÓXICOS e COMPARADORES LOXICOS

/*
    Os valores booleanos son o verdaderos o falsos. 
    C++ os trata como un resultado 1 o 0.
    
    Un valor falso é un valor de ->         0
    Un valor verdadeiro é un valor de ->    1
    
    
    Os comparadores que estamos a ver o máis confuso pode ser :
    
                            !=  
    
    
    que quere dicir DISTINTO o DIFERENTE DE
    
    
    No libro:
    
    2.-programar c con ejercicios resueltos-unlocked.pdf
    
    Páxina 24 podes ver cáles son.
    
    Na páxina 32 aparecen os operadores lóxicos. 
    
    OR , AND y NOT 
    
    que se escriben de maneira diferente ....
    
    
    
    Utilizo a función Verdadero para tener una mejor descripción del ejercicio
*/

// DECLARACION DE FUNCIONES

bool Verdadero(bool expresion);

int main()
{
    bool resultadoCondicion1,resultadoCondicion2,cierto,resultadoCondicion; // 
    
    //  COMPARADORES < > <= >= != ==
     
    resultadoCondicion1 = 4 < 5; // resultadoCondicion1 = 1 
    resultadoCondicion2 = 10 < 3; // resultadoCondicion2 = 0
    
    // OPERADOR && - AND
    // 1 && 0
    resultadoCondicion = resultadoCondicion1 && resultadoCondicion2;
    
    if (resultadoCondicion){
        cout << "A condición e certa" << endl;
    }else{
        cout << "A condición non é certa" << endl;
    }
    
    
    // OPERADOR - || - OR - O
    
    resultadoCondicion2 = 10 < 3;// resultadoCondicion2 = 0 - FALSO
    
    // 1 || 0
    resultadoCondicion = resultadoCondicion1 || resultadoCondicion2;
    
     if (resultadoCondicion){
        cout << "A condición e certa" << endl;
    }else{
        cout << "A condición non é certa" << endl;
    }
    
    resultadoCondicion1 = 20 < 3;// resultadoCondicion2 = 0 - FALSO
    
    // 0 || 0
    resultadoCondicion = resultadoCondicion1 || resultadoCondicion2;
    
     if (resultadoCondicion){
        cout << "A condición e certa" << endl;
    }else{
        cout << "A condición non é certa" << endl;
    }
    
}



