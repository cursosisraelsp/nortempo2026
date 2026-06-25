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
    bool resultadoCondicion1,cierto; // 
    
    //  COMPARADORES < > <= >= != ==
     
    resultadoCondicion1 = 4 < 5; // resultadoCondicion1 = 0 
   
    
    cierto = Verdadero(resultadoCondicion1);// INSERTO EN la variable cierto '1' o '0'
    
    if (cierto){
        cout << "A condición e certa" << endl;
    }else{
        cout << "A condición non é certa" << endl;
    }
}


bool Verdadero(bool expresion){
    return expresion == 1;// A comparación devolverá '1' o '0'
}
