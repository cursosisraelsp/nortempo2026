// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>

using namespace std;

// DEFINICIÓN DE FUNCION - DECLARACIÓN DE FUNCIONES // FIRMAS

//void Promedio();

void Promedio2();
float NotaAlumno();
float MediaNotas(float nota1, float nota2, float nota3, float nota4);

int main()
{
    //Promedio();
   Promedio2();
}


// A programación da función
void Promedio2(){
    
    // DEFINICION - INICIALIZACION DE VARIABLES
    
    float nota_1, nota_2 , nota_3, nota_4;
    
    // PROGRAMA
    
    nota_1 = NotaAlumno();
    nota_2 = NotaAlumno();
    nota_3 = NotaAlumno();
    nota_4 = NotaAlumno();
    
    cout << "\nO promedio das notas do alumno é: " << MediaNotas(nota_1,nota_2,nota_3,nota_4);
}



float NotaAlumno(){
    
    // DEFINCIÓN DE VARIABLES
    
    float notaAlumno;
    
    // ### ###
    
    // Escribo en pantalla
    cout << "Inserte nota do alumno: ";
    cin >> notaAlumno;
    
    return notaAlumno;
}

float MediaNotas(float nota1, float nota2, float nota3, float nota4){
    
    // Variables asociadas o resultado
    
    float resultadoSumaDasNotas;
    float promedioDasNotas;
    
    resultadoSumaDasNotas = nota1 + nota2 + nota3 + nota4;


    // cout << "O resultado da suma das notas é : " << resultadoSumaDasNotas;
    
    promedioDasNotas = resultadoSumaDasNotas / 4;
    
    return promedioDasNotas;
}


