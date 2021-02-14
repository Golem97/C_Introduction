CC= gcc
AR=ar
FLAGS= -Wall

all: libmyBank.a mains

mains: main.o libmyBank.a
	$(CC) $(FLAGS) -o mains main.o libmyBank.a

libmyBank.a: myBank.h
	$(AR) -rcs libmyBank.a
	
main.o: main.c myBank.c myBank.h
	$(CC) $(FLAGS) -c main.c
	
myBank.o: myBank.c myBank.h
	$(CC) $(FLAGS) -c myBank.c

.PHONY: clean all

clean:
	rm -f *.o *.a *.so mains maind
