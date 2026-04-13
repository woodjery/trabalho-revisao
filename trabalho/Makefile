CC=gcc
CFLAGS=-lm
DEPS=calculadora.h
OBJ=main.o calculadora.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
	echo "Compilado!"

clean:
	rm -rf *.o main

run:
	./main