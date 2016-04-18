# Makefile for Mersenne Twister

OBJS= mtwist.o

run: compile
	./mtwist

compile: $(OBJS)
	gcc -o mtwist main.c mtwist.o

mtwist.o:
	gcc -c mtwist.c

clean:
	rm mtwist *.o
