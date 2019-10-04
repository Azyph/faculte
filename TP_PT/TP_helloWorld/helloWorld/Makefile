CC = gcc
CFLAGS = -g -Wall -std=c99
LDFLAGS = -lm -lfoobar -L.

all : helloworld

helloworld : main.o libfoobar.a
	$(CC) $< $(CFLAGS) $(LDFLAGS) -o $@ 

main.o : main.c foo.h bar.h
	$(CC) -c $(CFLAGS) $<

foo.o : foo.c foo.h 
	$(CC) -c $(CFLAGS) foo.c

bar.o : bar.c bar.h 
	$(CC) -c $(CFLAGS) bar.c

libfoobar.a : foo.o bar.o
	ar -cr $@ $^

.PHONY : clean
clean :
	rm -f helloworld main.o bar.o foo.o libfoobar.a