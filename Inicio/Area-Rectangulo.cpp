// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>

using namespace std;


int main()
{
    // DEFINICION - INICIALIZACION DE VARIABLES
    
    float alturaRectangulo = 0;
    float baseRectangulo = 0;
    float areaRectangulo = 0;
    
    // PROGRAMA
    
    cout << "Introduce a altura do rectangulo: ";
    cin >> alturaRectangulo;
    
    // cout << "Introducín a altura do rectangulo: " << alturaRectangulo;
    
    cout << "Introduce a base do rectangulo: ";
    cin >> baseRectangulo;
    
    // cout << "Introducín a base do rectangulo: " << baseRectangulo;
   
   areaRectangulo = alturaRectangulo * baseRectangulo;
   
   cout << "\nA área do rectángulo é:  " << areaRectangulo;
   
   
   
   
}