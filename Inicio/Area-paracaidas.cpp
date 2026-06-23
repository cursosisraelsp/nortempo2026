
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>
#include <cmath> // Librería para la función pow(), sqrt()
#define PI 3.1416       // Define una constante de texto



using namespace std;

int main()
{
    
    // DECLARACIÓN DE VARIABLES
    
    float baseTriangulo;                                // R - según o enunciado 
    float hipotenusaTriangulo;                          // H - hipotenusaTriangulo
    bool condicionHipotenusaMaiorQueBaseDoTriangulo;    // condición
    float areaTriangulo;// R * C / 2
    float catetoFaltante; // C - según o enunciado
    float areaCirculo;
    
    float resultado; // Suma das áreas
    
    // variables auxiliares do PROGRAMA
    float cadradoBaseTriangulo;
    float cadradoHipotenusa;
    float diferenciaDaRaizDosCadrados;// cadradoHipotenusa^2 - cadradoHipotenusa^2
    float areaDousTriangulos;
    // variables constantes
    
    const int exponente = 2;
    
    cout << "Escribe a base do triángulo : ";
    cin >> baseTriangulo;
    
    cout << "Escribe a hipotenusa do triángulo : " ;
    cin >> hipotenusaTriangulo;
    
    condicionHipotenusaMaiorQueBaseDoTriangulo = hipotenusaTriangulo > baseTriangulo;
    
    if(condicionHipotenusaMaiorQueBaseDoTriangulo){
        
        //cout << "Condición correcta";
        cadradoBaseTriangulo = pow(baseTriangulo,exponente);
        cadradoHipotenusa = pow(hipotenusaTriangulo,exponente);
        diferenciaDaRaizDosCadrados = cadradoHipotenusa - cadradoBaseTriangulo;
        catetoFaltante = sqrt(diferenciaDaRaizDosCadrados);
        
        //cout << "\nO cateto faltante mide : " << catetoFaltante;
        
        // #### Triángulo ####
        areaTriangulo = ( baseTriangulo * catetoFaltante ) / 2;
        areaDousTriangulos = 2 * areaTriangulo;
        
        // #### Círculo ####
        
        areaCirculo = (PI * pow(baseTriangulo,exponente)) / 2;
        
        // #### RESULTADO ####
        
        resultado = areaCirculo + areaDousTriangulos;
        
        cout << "A área total é : " << resultado;
        
        
    }else{
        cout << "A hipotenusa do triángulo debe ser maior que a base do triángulo";
    }
    
    // O PROGRAMA
    
    return 0;
}


