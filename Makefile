main: add.o cpstd.o debug.o main.o
	gcc -o main add.o cpstd.o debug.o main.o
add.o: add.c add.h 
	gcc -c -o add.o add.c 
cpstd.o: cpstd.c cpstd.h
	gcc -c -o cpstd.o cpstd.c
debug.o: debug.c debug.h
	gcc -c -o debug.o debug.c
main.o: main.c add.h cpstd.h
	gcc -c -o main.o main.c