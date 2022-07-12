
INC=-I $(CURDIR) -I $(CURDIR)/includes
LIB = -Wall -lglfw3 

default:	main

main:	main.cpp
	g++ $(INC) main.cpp glad.c -o bin/triangle $(LIB) && bin/triangle 
