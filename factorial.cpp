#include <fstream>
#include <iostream>
using namespace std;

/* Saca el factorial de todos los enteros positivos hasta un numero, incluyendo el 0.
 * Parámetro factores: Apuntador a un arreglo vacio, ya inicializado. 
 * Parámetro numero: Numero hasta el cual se quiera hacer factorial.
 */
void factorial(int* factores, int numero){
    factores[0]=1;

    for(int i = 1; i<numero+1;i++){
        factores[i] = i * factores[i-1];
        cout<< factores[i]<<endl;
    }
}

void escribe(string archivo, int* datos, int n_dat){
  ofstream outfile;

  outfile.open(archivo);

  for (int i=0; i < n_dat; i++){
    outfile << datos[i] << endl;
  }
  outfile.close(); 
}

