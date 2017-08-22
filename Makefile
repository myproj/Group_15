objects =hello.o  factorial.o main.o   
x=g++
y=main.cpp

hello :	$(objects)
	$(x) -o hello $(objects)

hello.o:hello.cpp functions.h

factorial.o:factorial.cpp functions.h

main.o: main.cpp functions.h

clean : 	
	rm -f *.o
	rm -f hello

	

