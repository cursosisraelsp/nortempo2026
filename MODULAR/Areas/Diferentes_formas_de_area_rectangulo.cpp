// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>

using namespace std;

// DECLARACIÓN DE FUNCIONES
void AreaRectangulo();
void AreaRectangulo2();
void AreaRectangulo3();
float CalculoDoAreaDoRecatangulo(float alturaRectangulo, float baseRectangulo);
float PeticionDatos(string mensaxe);



//void CalculoDoAreaDoRecatangulo();

int main()
{
    AreaRectangulo3();
}

void AreaRectangulo(){
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
    
    cout << "\nA área do rectángulo é:  " << CalculoDoAreaDoRecatangulo(alturaRectangulo, baseRectangulo);
}

void AreaRectangulo2(){
      // DEFINICION - INICIALIZACION DE VARIABLES
    
    float alturaRectangulo = 0;
    float baseRectangulo = 0;
    float areaRectangulo = 0;
    
    string mensaxe;
    
    mensaxe = "Introduce a altura do rectangulo: ";
    // PROGRAMA
    
    cout << mensaxe;
    cin >> alturaRectangulo;
    
    // cout << "Introducín a altura do rectangulo: " << alturaRectangulo;
    mensaxe = "Introduce a base do rectangulo: ";
    cout << mensaxe;
    cin >> baseRectangulo;
    
    cout << "\nA área do rectángulo é:  " << CalculoDoAreaDoRecatangulo(alturaRectangulo, baseRectangulo);
}
void AreaRectangulo3(){
      // DEFINICION - INICIALIZACION DE VARIABLES
    
    float alturaRectangulo = 0;
    float baseRectangulo = 0;
    float areaRectangulo = 0;
    
    
    // PROGRAMA
    
    alturaRectangulo = PeticionDatos("Introduce a altura do rectangulo: ");
    baseRectangulo = PeticionDatos("Introduce a base do rectangulo: ");
    
    
    cout << "\nA área do rectángulo é:  " << CalculoDoAreaDoRecatangulo(alturaRectangulo, baseRectangulo);
}
/*void CalculoDoAreaDoRecatangulo(){
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
   
   areaRectangulo = alturaRectangulo * baseRectangulo;
   cout << "\nA área do rectángulo é:  " << areaRectangulo;
}
*/
float CalculoDoAreaDoRecatangulo(float alturaRectangulo, float baseRectangulo){
    return alturaRectangulo * baseRectangulo;
}

float PeticionDatos(string mensaxe){
    // DEFINICION DE VARIABLES
    float dato;
    
    cout << mensaxe;
    cin >> dato;
    
    return dato;
}

