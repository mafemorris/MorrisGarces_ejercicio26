#include <fstream>
#include <iostream>
using namespace std;

/*Lee un archivo de datos. Cambia un numero por la cantidad de valores en el archivo.
 * Parámetro archivo: String del nombre del archivo que se va a leer. El cual debe tener datos tipo float. 
 * Parámetro puntos: Apuntador a la cantidad de datos del archivo. 
 * Retorna una lista con los datos de tipo float. */
float* lee(string archivo, int* puntos){
    int lineas = 0;
    ifstream infile; 
    string line;
    float *a;

    infile.open(archivo); 
    getline(infile, line);

    int i=0;
    while(infile){
        lineas ++;
        i++;
        getline(infile, line);
    }
    infile.close();

    infile.open(archivo); 
    getline(infile, line);

    *puntos = lineas;
    a = new float[lineas];

    int j=0;
    while(infile){
        a[j] = atof(line.c_str());
        j++;
        getline(infile, line);
    }
    infile.close();

    return a;
}

/* Multiplica los valores de dos arreglos. 
 * Parámetro l1: apuntador al arreglo 1. Inicializado, con los valores de tipo float. De tamaño num. 
 * Parámetro l2: apuntador al arreglo 2. Inicializado, con los valores de tipo float. De tamaño num. 
 * Retorna un arreglo con la multiplicación.*/
float* multip(float* l1,float* l2, int num){
    float* l = NULL;
    l = new float[num];
    for(int i = 0; i<num; i++){
        l[i]=l1[i]*l2[i];
    }
    return l;
}


void escribe(string archivo, float* datos, int n_dat){
  ofstream outfile;

  outfile.open(archivo);

  for (int i=0; i < n_dat; i++){
    outfile << datos[i] << endl;
  }
  outfile.close(); 
}