// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>

using namespace std;

/*

A altura ten que ser maior de 20

*/

int main()
{
    // DEFINICION - INICIALIZACION DE VARIABLES
    
    float alturaRectangulo = 0;
    float baseRectangulo = 0;
    float areaRectangulo = 0;
    
    // variable condicional
    bool condionCalculoArea;
    
    
    // PROGRAMA
    
    cout << "Introduce a altura do rectangulo: ";
    cin >> alturaRectangulo;


    cout << "Introduce a base do rectangulo: ";
    cin >> baseRectangulo;
    
    // expresion1 AND expresion2
    // expresion1 = alturaRectangulo > 20
    // expresion2 = baseRectangulo > 30
    // AND -> &&
    condionCalculoArea = alturaRectangulo > 20 && baseRectangulo > 30;
    // recordad que se puede sustituir toda la condicion por la expresión total
    if(condionCalculoArea){
       cout << "A área é : " << (baseRectangulo * alturaRectangulo)/2;
    }else {
        cout << endl;
        cout << "Os valores introducidos non corresponden ás condicións ";
    }
    
   
    
}


/*

cout << "Introduce a base do rectangulo: ";
    cin >> baseRectangulo;
    
    // cout << "Introducín a base do rectangulo: " << baseRectangulo;
   
   areaRectangulo = alturaRectangulo * baseRectangulo;
   
   cout << "\nA área do rectángulo é:  " << areaRectangulo;

*/



