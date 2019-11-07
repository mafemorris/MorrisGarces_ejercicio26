#include <fstream>
#include <iostream>
using namespace std;

/* Programa que junta los dos ejercicios hechos en clase que están en los archivos factorial.cpp y archivos.cpp. 
 *
 */
#include "ejercicios.hpp"

int main(){
    float* x=NULL;
    float* y=NULL;
    int fx = 0;
    int fy = 0;
    x = lee("valores_x.txt", &fx);
    y = lee("valores_y.txt", &fy);
    
    float* multipli = NULL;
    multipli = multip(x,y,fx);

    escribe("multiplicacion.txt",multipli,fx);
    
    delete multipli;
    delete x;
    delete y;

    int* factores;
    int numero = 4;
    factores = new int[numero];
    factorial(factores,numero);
    cout<< factores[1]<<endl;
    escribe("factorial.txt",factores,numero+1);

    return 0;
}