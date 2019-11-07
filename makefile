multiplicacion.txt factorial.txt : ejercicios.x
	./ejercicios.x

ejercicios.x : ejercicios.cpp
	g++ ejercicios.cpp factorial.cpp archivos.cpp -o ejercicios.x

clear :
	rm ejercicios.x multiplicacion.txt factorial.txt