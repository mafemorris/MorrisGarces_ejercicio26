multiplicacion.txt : archivoss.x
	./archivoss.x

archivoss.x : archivos.cpp
	c++ archivoss.cpp -o archivoss.x

clear :
	rm archivoss.x multiplicacion.txt