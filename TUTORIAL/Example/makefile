mycalc: calc.o prog.o
	gcc -ansi -Wall -g prog.o calc.o -o mycalc -lm
prog.o: prog.c data.h
	gcc -c -ansi -Wall prog.c -o prog.o
clac.0: calc.c data.h
	gcc -c -ansi -Wall calc.c -o calc.o -lm
