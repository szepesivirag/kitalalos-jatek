all: main

main: main.o
	gcc -o main main.o

hello.o: main.c
	gcc -c main.c

clean:
	rm main.o main