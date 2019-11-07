//Header con los métodos. 

//Ejercicio 1.

void factorial(int*, int); 

//Ejercicio 2.

float* lee(string, int*);  
float* multip(float*,float*, int);


/* Escribe en un archivo los datos pasados por parámetro. 
 * Parámetro archivo: String del nombre del archivo donde se van a guardar los datos.
 * Parámetro datos: apuntador del arreglo de datos que se van a escribir. De tipo T, que debe ser float, int, double, long, etc. 
 * Parámetro n_dat: número de datos que se van a guardar en el archivo.
 */
template <class T>
void escribe(string archivo, T* datos, int n_dat){
  ofstream outfile;
  //abre el archivo.
  outfile.open(archivo);

  for (int i=0; i < n_dat; i++){
    outfile << datos[i] << endl;
  }
  //cierra el archivo.
  outfile.close(); 
}
