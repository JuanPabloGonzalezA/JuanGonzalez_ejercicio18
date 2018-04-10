primera : grafica1.png
grafica1.png : datos_calentando.txt
	python graficacalentando.py
datos_calentando.txt : calentamiento
	./calentamiento >> datos_calentando.txt
calentamiento :
	c++ calentamiento.cpp -o calentamiento
segunda : grafica2.png
grafica2.png : datos2.txt
	python grafica2.py
datos2.txt : segundo
	./segundo >> datos2.txt
segundo :
	c++ segundo.cpp -o segundo

clean : 
	rm calentamiento grafica1.png datos_calentando.txt segundo datos2.txt grafica2.png grafica3.png
