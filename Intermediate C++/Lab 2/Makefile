#
#
CC=g++
#
#CFLAGS = -c -Wall -I/usr/include/mysql 
#LFLAGS = -L/usr/lib/mysql -lmysqlclient

CFLAGS = -c -Wall  
LFLAGS =  


all: vectorstructTax

vectorstructTax: vectorstructTax.o printMeFirst.o 
	$(CC) vectorstructTax.o printMeFirst.o  -o vectorstructTax $(LFLAGS)

vectorstructTax.o: vectorstructTax.cpp
	$(CC) $(CFLAGS) vectorstructTax.cpp

print_me_first.o: printMeFirst.cpp
	$(CC) $(CFLAGS) printMeFirst.cpp
	
clean:
	rm *.o vectorstructTax

run:
	./vectorstructTax 
