// Librerías
/*
Un galón es una unidad de medida de volumen utilizada principalmente en países
angloparlantes (como Estados Unidos y el Reino Unido) para medir líquidos.
Dependiendo del país, existen dos tipos principales con distintas equivalencias:

Galón estadounidense (US): 
 - Equivalente a 3,785 litros (es el más común internacionalmente)
 
*/
#include<iostream>

#define GALON 3.785
#define COSTE 10.5

using namespace std;

/*
    Exemplo 2.7 do pseudocódigo
*/
int main()
{

    // Declaracion de variables

    int     litros;
    float   precioGalon;
    float   cantidadeGalonsProducidos;
    float   ganancia;
    
    // NOVA VARIABLE INTRODUCIDA POR IDEA DE LAURA
    
    float costeProduccion;
    
    // PROGRAMA
    
    cout << "Ingrese la cantidad de litros: ";
    cin >> litros;
    
    cout << "Ingrese el precio del galón: ";
    cin >> precioGalon;

    cantidadeGalonsProducidos = (litros) / GALON ;
    costeProduccion = cantidadeGalonsProducidos * COSTE; // Utilizo GALONES PARA EL COSTE DE PRODUCCIÓN
   
    ganancia = precioGalon * cantidadeGalonsProducidos;
    
    cout << "A ganancia é: " << ganancia << endl;
    cout << "O coste de producción é: " << costeProduccion << endl;
    
    if(costeProduccion < ganancia){
        cout << "ESTO PARECE OK PERO ....";
    }else{
        cout << "HACER BARBACOA";
    }
    
}

