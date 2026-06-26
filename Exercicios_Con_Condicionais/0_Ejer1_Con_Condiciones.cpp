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
    
    // PROGRAMA
    
    cout << "Introduce a altura do rectangulo: ";
    cin >> alturaRectangulo;


    cout << "Introduce a base do rectangulo: ";
    cin >> baseRectangulo;
    
    if(alturaRectangulo > 20.0){
        cout << "Altura correcta" << endl;
        
        if(baseRectangulo > 30){
            cout << "Base correcta" << endl;
            cout << "A área é : " << (baseRectangulo * alturaRectangulo)/2;
        }else{
            cout << " Base non é correcta, non se pode realizar o cálculo";
        }
        
        
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



