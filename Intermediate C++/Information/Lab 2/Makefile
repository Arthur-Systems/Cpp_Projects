#
#
CC=g++
#
#CFLAGS = -c -Wall -I/usr/include/mysql 
#LFLAGS = -L/usr/lib/mysql -lmysqlclient

CFLAGS = -c -Wall  
LFLAGS =  


all: vectorstructTax

vectorstructTax: vectorstructTax.o print_me_first.o 
	$(CC) vectorstructTax.o print_me_first.o  -o vectorstructTax $(LFLAGS)

vectorstructTax.o: vectorstructTax.cpp
	$(CC) $(CFLAGS) vectorstructTax.cpp

print_me_first.o: print_me_first.cpp
	$(CC) $(CFLAGS) print_me_first.cpp
	
clean:
	rm *.o vectorstructTax

run:
	./vectorstructTax 
