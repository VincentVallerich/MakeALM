CC=gcc
CDFLAGS=
LDFLAGS=
EXEC=main

all: $(EXEC)
$(EXEC): add.o cpstd.o debug.o main.o
	$(CC) -o $@ $^ $(LDFLAGS)
%.o: %.c 
	$(CC) -c $(CFLAGS) -o $@ $< 
main.o: add.h cpstd.h
cpstd.o: cpstd.h
debug.o: debug.h
clean: 
	rm -rf *.o 
cleanall: clean 
	rm -f $(EXEC)