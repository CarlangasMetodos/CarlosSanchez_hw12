grafica.pdf:CarlosSanchez_graph.py advection.txt
	python CarlosSanchez_graph.py

advection.txt:a.out
	./a.out > advection.txt

a.out:CarlosSanchez_advection.cpp
	g++ CarlosSanchez_advection.cpp
