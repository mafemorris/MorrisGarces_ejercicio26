#include <fstream>
#include <iostream>
using namespace std;

//inicializa la funcion que lee un archivo y lo pone en un arreglo. 
float* lee(string, int*);
//inicializa la funcion que multiplica dos arreglos. 
float* multip(float*,float*, int);
//
void escribe(string,float*, int);
void escribe(string,int*, int);

void factorial(int*, int);

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

void escribe(string archivo, int* datos, int n_dat){
  ofstream outfile;

  outfile.open(archivo);

  for (int i=0; i < n_dat; i++){
    outfile << datos[i] << endl;
  }
  outfile.close(); 
}

void factorial(int* factores, int numero){
    factores[0]=1;

    for(int i = 1; i<numero+1;i++){
        factores[i] = i * factores[i-1];
        cout<< factores[i]<<endl;
    }
}