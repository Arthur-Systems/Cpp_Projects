#
#
CC=g++
#
CFLAGS = -c -Wall -I/usr/include/mysql 
LFLAGS = -L/usr/lib/mysql -lmysqlclient



all: winedb

winedb: winedb.o dbconnect.o
	$(CC) winedb.o dbconnect.o -o winedb $(LFLAGS)

dbconnect.o: dbconnect.cpp
	$(CC) $(CFLAGS) dbconnect.cpp

winedb.o: winedb.cpp
	$(CC) $(CFLAGS) winedb.cpp

clean:
	rm *.o winedb

run:
	./winedb "select * from wineInfo where price > 100"
