CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -pedantic -std=c++11 -g -fsanitize=address
LDFLAGS =  -fsanitize=address

SRC = HWa9.cpp
OBJ = $(SRC:.cc=.o)
EXEC = BinaryTree

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(LDFLAGS) -o $@ $(OBJ) $(LBLIBS)

clean:
	rm -rf $(EXEC)