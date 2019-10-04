CC = gcc
CFLAGS = -g -Wall -std=c99
LDFLAGS = -lm

all : solve-TSP convert-2D-to-full

solve-TSP : solve-TSP.o tsp.o memoire.o matrice2d.o
	$(CC) $^ $(CFLAGS) $(LDFLAGS) -o $@ 

convert-2D-to-full : convert-2D-to-full.o tsp.o memoire.o matrice2d.o
	$(CC) $^ $(CFLAGS) $(LDFLAGS) -o $@ 

solve-TSP.o : solve-TSP.c tsp.h matrice2d.h
convert-2D-to-full.o : convert-2D-to-full.c tsp.h matrice2d.h
tsp.o : tsp.c tsp.h memoire.h
memoire.o : memoire.c memoire.h
matrice2d.o : matrice2d.c matrice2d.h memoire.h

.PHONY : clean
clean :
	rm -f solve-TSP convert-2D-to-full *.o