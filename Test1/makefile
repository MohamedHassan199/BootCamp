Cflags = -Wl,-Map=Test1.map

sum.exe: main.o Func1.o Func2.o
	gcc -o sum.exe main.o Func1.o Func2.o 
	gcc $^ --output $@  $(Cflags) 


	
main.o : Func1.h Func2.h 
	gcc -c main.c

Func1.o: Func1.h Func1.c
	gcc -c Func1.c
	
Func2.o: Func2.h Func2.c
	gcc -c Func2.c

clean: main.o Func1.o Func2.o
	del *.o