#
#
CC=g++
#
CFLAGS = -c -Wall -I/usr/lib/mysql
LFLAGS = -L/usr/lib/mysql -lmysqlclient
SRC = winedata.cpp winedb.cpp printMeFirst.cpp dbconnect.cpp
OBJ = $(SRC:.cc=.o)
EXEC = winedb

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(LDFLAGS) -o $@ $(OBJ) $(LBLIBS) `mysql_config --cflags --libs`

clean:
	rm *.o winedb

run:
	./winedb "select * from wineInfo where price > 100"
