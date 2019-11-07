multiplicacion.txt factorial.txt : ejercicios.x
	./ejercicios.x
	rm ejercicios.x

ejercicios.x : ejercicios.cpp
	g++ ejercicios.cpp factorial.cpp archivos.cpp -o ejercicios.x

clear :
	rm multiplicacion.txt factorial.txt