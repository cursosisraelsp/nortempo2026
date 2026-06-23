
// ZONA DAS LIBRERIAS

#include<iostream>
#include <cmath> // Librería para la función pow(), sqrt()
#include <numbers>


using namespace std;

// DEFINICION DE FUNCIÓNS

void AreaFigura();
float funcionAreaTriangulo(float cateto, float base);
float funcionAreaCirculo(float radio , float exponente);
void calculoDeArea(float baseTriangulo ,float exponente , float hipotenusaTriangulo);
float sumaDeAreas(float areaCirculo, float areaDousTriangulos);
// DEFINICION DE CONSTANTES 

#define PI 3.1416       // Define una constante de texto


int main()
{
   
   AreaFigura(); 
   
    return 0;
}


void AreaFigura(){
    
     // DECLARACIÓN DE VARIABLES
    
    float baseTriangulo;                                // R - según o enunciado 
    float hipotenusaTriangulo;                          // H - hipotenusaTriangulo
    bool condicionHipotenusaMaiorQueBaseDoTriangulo;    // condición
    const int exponente = 2;
    
    cout << "Escribe a base do triángulo : ";
    cin >> baseTriangulo;
    
    cout << "Escribe a hipotenusa do triángulo : " ;
    cin >> hipotenusaTriangulo;
    
    condicionHipotenusaMaiorQueBaseDoTriangulo = hipotenusaTriangulo > baseTriangulo;
    
    if(condicionHipotenusaMaiorQueBaseDoTriangulo){
        
        calculoDeArea(baseTriangulo ,exponente , hipotenusaTriangulo); // FUNCION de cálculo de área
        
    }else{
        cout << "A hipotenusa do triángulo debe ser maior que a base do triángulo";
    }
    
    // O PROGRAMA
    
}


void calculoDeArea(float baseTriangulo ,float exponente , float hipotenusaTriangulo){
    
    // DEFINICION DE VARIABLES
    
    float areaCirculo;
    float resultado; // Suma das áreas
    float cadradoBaseTriangulo;
    float cadradoHipotenusa;
    float diferenciaDaRaizDosCadrados;// cadradoHipotenusa^2 - cadradoHipotenusa^2
    float catetoFaltante; // C - según o enunciado
    float areaTriangulo;// R * C / 2
    float areaDousTriangulos;
   // PROGRAMA
        
        cadradoBaseTriangulo = pow(baseTriangulo,exponente);
        cadradoHipotenusa = pow(hipotenusaTriangulo,exponente);
        
        diferenciaDaRaizDosCadrados = cadradoHipotenusa - cadradoBaseTriangulo;
        
        catetoFaltante = sqrt(diferenciaDaRaizDosCadrados);
        
        //cout << "\nO cateto faltante mide : " << catetoFaltante;
        
        // #### Triángulo ####
        
        areaTriangulo = funcionAreaTriangulo(baseTriangulo, catetoFaltante);
        areaDousTriangulos = 2 * areaTriangulo;
        
        // #### Círculo ####
        
        areaCirculo = funcionAreaCirculo(baseTriangulo, exponente);
        
        // #### RESULTADO ####
        
        resultado = sumaDeAreas(areaTriangulo,areaDousTriangulos);
        
        cout << "A área total é : " << resultado;
    
}

float funcionAreaTriangulo(float cateto, float base){
    
    return ( base * cateto ) / 2 ;
    
}

float funcionAreaCirculo(float radio , float exponente){
    return (PI * pow(radio,exponente)) / 2;
}

float sumaDeAreas(float areaCirculo, float areaDousTriangulos){
    return areaCirculo + areaDousTriangulos;
}



