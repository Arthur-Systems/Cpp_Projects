CC = g++
CFLAGS = -Wall -Werror -Wextra -pedantic -std=c++17 -g -fsanitize=address
LDFLAGS = 

SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)
EXE = a1

all: $(EXE)
$(EXE): $(OBJ)
	$(CC) $(LDFLAGS) -o $(EXE) $(OBJ) 

clean:
	rm -rf $(OBJ) $(EXE)

run: 
	./$(EXE)