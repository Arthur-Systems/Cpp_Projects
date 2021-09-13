CC = g++
CFLAGS = -Wall -Werror -Wextra -pedantic -std=c++17 -g -fsanitize=address
LDFLAGS = -lm

SRC = *.cpp
OBJ = $(src:.cpp=.o)
EXE = a1

all: $(EXE)
$(EXE): $(OBJ)
	$(CC) $(LDFLAGS) -o $(OBJ) 

clean:
	rm -rf $(OBJ) $(EXE)

run: 
	./$(EXE)