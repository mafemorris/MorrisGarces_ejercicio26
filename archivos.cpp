#include <fstream>
#include <iostream>
using namespace std;

/*Lee un archivo de datos. Cambia un numero por la cantidad de valores en el archivo.
 * Parámetro archivo: String del nombre del archivo que se va a leer. El cual debe tener datos tipo float. 
 * Parámetro puntos: Apuntador a la cantidad de datos del archivo. 
 * Retorna una lista con los datos de tipo float. */
float* lee(string archivo, int* puntos){
    //Número de lineas del archivo.
    int lineas = 0;
    ifstream infile; 
    string line;
    //Apuntador de la lista que está en el archivo.
    float *a;

    //Abre el archivo.
    infile.open(archivo); 
    //Trae cada linea.
    getline(infile, line);


    while(infile){
        //Agrega en 1 por cada linea del archivo.
        lineas ++;
        getline(infile, line);
    }
    //cierra el archivo.
    infile.close();

    //Abre el archivo esta vez para sacar cada elemento.
    infile.open(archivo); 
    getline(infile, line);

    //Longitud de la lista que va a ser resultado.
    *puntos = lineas;
    //Inicializa la lista.
    a = new float[lineas];

    int i=0;
    while(infile){
        //Convierte de string a float.
        a[i] = atof(line.c_str());
        i++;
        getline(infile, line);
    }
    //Cierra el archivo.
    infile.close();

    return a;
}

/* Multiplica los valores de dos arreglos. 
 * Parámetro l1: apuntador al arreglo 1. Inicializado, con los valores de tipo float. De tamaño num. 
 * Parámetro l2: apuntador al arreglo 2. Inicializado, con los valores de tipo float. De tamaño num. 
 * Retorna un arreglo con la multiplicación.*/
float* multip(float* l1,float* l2, int num){
    //Apuntador de la lista l1*l2.
    float* l = NULL;
    //Inicializa la lista del tamaño de las listas que vienen por parámetro.
    l = new float[num];
    for(int i = 0; i<num; i++){
        //multiplica en la posición.
        l[i]=l1[i]*l2[i];
    }
    return l;
}