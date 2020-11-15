CC=gcc
HEADER=myMath.h
MAIN_O=main.o
FLAGS=-Wall -g
LIB_OBJECTS=basicMath.o power.o
AR=ar
.PHONY: all clear mymaths mymathd 
all: mymaths mymathd mains maind
power.o: power.c $(HEADER)
	$(CC) $(FLAGS) -c power.c
basicMath.o: basicMath.c $(HEADER)
	$(CC) $(FLAGS) -c basicMath.c
main.o: main.c $(HEADER)
	$(CC) $(FLAGS) -c main.c 
mymaths: libmyMath.a
libmyMath.a: $(LIB_OBJECTS)
	$(AR) -rcs libmyMath.a basicMath.o power.o
mymathd: libmyMath.so
libmyMath.so: $(LIB_OBJECTS)
	$(CC) -shared -o libmyMath.so basicMath.o power.o 
mains: libmyMath.a $(MAIN_O) 
	$(CC) $(FLAGS) -o mains $(MAIN_O) -L. -lmyMath
maind: libmyMath.so main.o
	$(CC) $(FLAGS) -o maind $(MAIN_O) ./libmyMath.so 
clean:
	rm -f *.o *.so *.a mains maind
	
	

	
