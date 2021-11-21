#
#
#  Example of Makefile to compile multiple files
#
CC=g++ 
#
CFLAGS = -c -Wall 
LFLAGS = 
#CFLAGS = -c -Wall -I/usr/include/mysql 
#LFLAGS = -L/usr/lib/mysql -lmysqlclient



all: LinkedList_Test

LinkedList_Test: LinkedList_Test.o printMeFirst.o printPersonInfo.o printWineInfo.o Wine.o Person.o
	$(CC) LinkedList_Test.o printMeFirst.o printPersonInfo.o printWineInfo.o Wine.o Person.o -o LinkedList_Test $(LFLAGS)

LinkedList_Test.o: LinkedList_Test.cpp LinkedList.h
	$(CC) $(CFLAGS) LinkedList_Test.cpp

printMeFirst.o: printMeFirst.cpp LinkedList.h
	$(CC) $(CFLAGS) printMeFirst.cpp

printPersonInfo.o: printPersonInfo.cpp LinkedList.h
	$(CC) $(CFLAGS) printPersonInfo.cpp

printWineInfo.o: printWineInfo.cpp LinkedList.h
	$(CC) $(CFLAGS) printWineInfo.cpp

Person.o: Person.cpp Person.h LinkedList.h
	$(CC) $(CFLAGS) Person.cpp

Wine.o: Wine.cpp Wine.h LinkedList.h
	$(CC) $(CFLAGS) Wine.cpp


clean:
	rm *.o LinkedList_Test

run:
	./LinkedList_Test
