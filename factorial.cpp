#include <fstream>
#include <iostream>
using namespace std;

/* Saca el factorial de todos los enteros positivos hasta un numero, incluyendo el 0.
 * Parámetro factores: Apuntador a un arreglo vacio, ya inicializado. 
 * Parámetro numero: Numero hasta el cual se quiera hacer factorial.
 */
void factorial(int* factores, int numero){
    //primer valor de la lista, que corresponde a 0!=1.
    factores[0]=1;

    for(int i = 1; i<numero+1;i++){
        //agrega el factorial al apuntador en la posición requerida.
        factores[i] = i * factores[i-1];
    }
}



