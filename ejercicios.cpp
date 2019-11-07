#include <fstream>
#include <iostream>

using namespace std;

// Header con los métodos utilizados.
#include "ejercicios.hpp"

/* Programa que junta los dos ejercicios hechos en clase que están en dos archivos.
 * Archivo 1: factorial.cpp Contiene el método que saca un array de factoriales.
 * Archivo 2: archivos.cpp Contiene el método que lee y que multiplica dos listas.
 * Header: Contiene la pseudoinicialización de los métodos y el template del método para escribir un archivo.
 * Retorna 0 si todo sale bien.
 */
int main(){
    //Apuntador de la lista x.
    float* x=NULL;
    //Apuntador de la lista y.
    float* y=NULL;
    //Tamaño de la lista x.
    int fx = 0;
    //Tamaño de la lista y.
    int fy = 0;

    //Lee los archivos y los asigna a los atributos.
    x = lee("valores_x.txt", &fx);
    y = lee("valores_y.txt", &fy);
    
    //Apuntador de la lista de x*y.
    float* multipli = NULL;
    //Multiplica los dos arreglos.
    multipli = multip(x,y,fx);

    //Escribe el archivo con las listas x y y multiplicados.
    escribe("multiplicacion.txt",multipli,fx);
    
    //Borra los apuntadores.
    delete multipli;
    delete x;
    delete y;

    //Apuntador para los factoriales.
    int* factores;
    //Numero hasta el cual se van a sacar los factoriales. 
    int numero = 10;
    //Inicializa el apuntador con el tamaño de numero.
    factores = new int[numero];
    //Llena el arreglo factor.
    factorial(factores,numero);
    //Escribe el archivo con los factoriales. 
    escribe("factorial.txt",factores,numero+1);

    return 0;
}