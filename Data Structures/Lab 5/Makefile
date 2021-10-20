CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -pedantic -std=c++17 -g -fsanitize=address
LDFLAGS =  -fsanitize=address

SRC = HWa5.cpp
OBJ = $(SRC:.cc=.o)
EXEC = Rain

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(LDFLAGS) -o $@ $(OBJ) $(LBLIBS)


run:
	./$(EXEC)

clean:
	rm -rf $(EXEC)