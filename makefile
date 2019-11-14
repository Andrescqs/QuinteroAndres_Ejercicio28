friccion.dat : friccion.x
	./friccion.x >> friccion.dat

friccion.x : friccion.cpp
	c++ friccion.cpp -o friccion.x
