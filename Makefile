all: BinaryCalc

BinaryCalc: BinaryCalc.c 
	gcc -o BinaryCalc BinaryCalc.o

clean:
	rm -rf *.o

mrproper: clean
	rm -rf BinaryCalc