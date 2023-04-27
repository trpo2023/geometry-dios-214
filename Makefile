all: geometry
geometry: geometry.c
	gcc -Wall -Werror -o geometry geometry.c
run:
	./geometry geom.txt
clean:
	rm -rf *.o geometry
