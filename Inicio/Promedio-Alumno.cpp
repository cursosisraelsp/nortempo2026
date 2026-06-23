// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>

using namespace std;


int main()
{
    // DEFINICION - INICIALIZACION DE VARIABLES
    
    // Notas
    
    float nota_1;
    float nota_2;
    float nota_3;
    float nota_4;
    
    // Variables asociadas o resultado
    
    float resultadoSumaDasNotas;
    float promedioDasNotas;
    
    // PROGRAMA
    
    // Escribo en pantalla
    cout << "Inserte nota_1 do alumno: ";
    
    // Leo variable de entrada
    
    cin >> nota_1;
    
    // COMPROBO QUE nota_1 contiene el valor que inserto
    
    //cout << "Insertei a nota_1 : " << nota_1 << endl ;
    
    cout << "Inserte nota_2 do alumno: ";
    cin >> nota_2;
    // cout << "Insertei a nota_2 : "  << nota_2;
    
    cout << "Inserte nota_3 do alumno: ";
    cin >> nota_3;
    
    cout << "Inserte nota_4 do alumno: ";
    cin >> nota_4;
    
    resultadoSumaDasNotas = nota_1 + nota_2 + nota_3 + nota_4;


    // cout << "O resultado da suma das notas é : " << resultadoSumaDasNotas;
    
    promedioDasNotas = resultadoSumaDasNotas / 4;
    
    cout << "\nO promedio das notas do alumno é: " << promedioDasNotas;
        
   
}