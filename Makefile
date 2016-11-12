
all: obj/LibrarySource.o install
INC=inc/

obj/%.o : src/%.cpp
	g++ -c -I $(INC) $< -o $@

install:	
	ar r lib/libmyLibrary.a obj/LibrarySource.o
	
