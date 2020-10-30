CC = g++

FLAGS = -std=c++14 -Wall -g

all: hwEC

hwEC: hwEC.cpp 
	$(CC) $(FLAGS) hwEC.cpp -o hwEC

clean:
	rm *.o hwEC hwEC.tar
	
tar:
	tar cf hwEC.tar hwEC.scr Makefile hwEC.cpp
	
	