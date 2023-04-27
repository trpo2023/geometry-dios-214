main: main.c
	gcc -Wall -o main main.c
run:
	./main
clean:
	rm -rf *.o main
