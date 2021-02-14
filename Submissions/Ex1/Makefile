CC= gcc
AR=ar
FLAGS= -Wall

all: libmyMath.so libmyMath.a mains maind

mains: main.o libmyMath.a
	$(CC) $(FLAGS) -o mains main.o libmyMath.a

maind: main.o
	$(CC) $(FLAGS) -o maind main.o ./libmyMath.so
	
libmyMath.so: basicMath.o power.o
	$(CC) -shared -o libmyMath.so basicMath.o power.o

libmyMath.a: basicMath.o power.o
	$(AR) -rcs libmyMath.a basicMath.o power.o

#myMath.o: myMath.c myMath.h
#	$(CC) $(FLAGS) -c myMath.c
	
main.o: main.c basicMath.c power.c myMath.h
	$(CC) $(FLAGS) -c main.c
	
power.o: power.c myMath.h
	$(CC) $(FLAGS) -c power.c
	
basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c

.PHONY: clean all

clean:
	rm -f *.o *.a *.so mains maind
