#
#
CC=g++
#
#CFLAGS = -c -Wall -I/usr/include/mysql 
#LFLAGS = -L/usr/lib/mysql -lmysqlclient
CFLAGS = -c -Wall 
LFLAGS = 


all: factorial

factorial: factorial.o factorial_func.o printMeFirst.o
	$(CC) factorial.o factorial_func.o printMeFirst.o -o factorial $(LFLAGS)

factorial.o: factorial.cpp
	$(CC) $(CFLAGS) factorial.cpp

factorial_func.o: factorial_func.cpp
	$(CC) $(CFLAGS) factorial_func.cpp

printMeFirst.o: printMeFirst.cpp printMeFirst.h
	$(CC) $(CFLAGS) printMeFirst.cpp

	
clean:
	rm *.o factorial

run:
	./factorial 5
