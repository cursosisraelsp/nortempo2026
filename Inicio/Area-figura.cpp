// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
using namespace std;


int main()
{
    // DEFINICION - INICIALIZACION DE VARIABLES
    
    // #### VARIABLES ####
    
    float baseFigura = 0;
    float alturaFigura = 0;
    float alturaParteRectangulo = 0;
    float alturaParteTriangulo = 0;
    
    //#### AREAS #####
    
    float areaParteRectangulo = 0;
    float areaParteTriangulo = 0;
    float areaFigura = 0;
    
    // #### CONSTANTES ####
    
    
    // PROGRAMA
   
    // 1ª Parte 
    // LECTURA DE DATOS
    // BASE E ALTURA DA FIGURA
    cout << "######### INICIO DE PROGRAMA ############" << endl;
    
    cout << endl;
    cout << endl;
    cout << "Introduce altura da figura: ";
    cin >> alturaFigura;
    cout << endl;

    cout << "Introduce base da figura: ";
    cin >> baseFigura;
    
    cout << endl;
    
    
    
    // LECTURA DA PARTE DO RECTANGULO 
    
    cout << "Introduce altura da parte do rectángulo : "  ;
    cin >> alturaParteRectangulo;
    
    // 2ª Parte 
    // Operacións
    
    // PARTE DO TRIANGULO 
    
    alturaParteTriangulo = alturaFigura - alturaParteRectangulo;
    areaParteTriangulo = (alturaParteTriangulo * baseFigura) / 2;
    
    // PARTE DO RECTANGULO
    
    areaParteRectangulo = baseFigura * alturaParteRectangulo;
    
    
    // AREA TOTAL DA FIGURA
    
    areaFigura = areaParteRectangulo + areaParteTriangulo;
    
    cout << endl;
    cout << endl;
    cout << endl;
    // SACAMOS POLO TERMINAL A ÁREA DA FIGURA TOTAL
    cout << "######### ##########  ######## ############" << endl;
    cout << "######### RESULTADO DO PROGRAMA ############" << endl;
    cout << "######### ##########  ######## ############" << endl;
    
    cout << endl;
    cout << "A área da figura é: " << areaFigura;
    cout << endl;
    cout << endl;
    cout << endl;
    /*
    cout << "######### DATOS ESCRITOS DO USUARIO ############" << endl;
    cout << "#########  ############   ############" << endl;
    cout << endl;
    cout << endl;
    cout << "BASE DA FIGURA : " << baseFigura << endl;
    cout << "ALTURA DA FIGURA : " << alturaFigura << endl;
    */
    // ------ 
    cout << "######### ########  ####### ############" << endl;
    cout << "#########  FIN DO PROGRAMA  ############" << endl;
    cout << "######### ##########  ######## ############" << endl;
    return 0;
   
   
   
   
}