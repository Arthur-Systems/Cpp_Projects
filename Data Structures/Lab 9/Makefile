CXX = g++
CXXFLAGS = -std=c++17

SRC = HWa9.cpp
OBJ = $(SRC:.cc=.o)
EXEC = BinaryTree

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(LDFLAGS) -o $@ $(OBJ) $(LBLIBS)

clean:
	rm -rf $(EXEC)