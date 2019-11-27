envolve_A.png : graficar.py parte1.dat
	python graficar.py
	
parte1.dat : ejercicio.x
	./ejercicio.x
	
metro.x : ejercicio.cpp
	c++ ejercicio.cpp -o ejercicio.x

clean :
	rm parte1.dat ejercicio.x envolve_A.png
