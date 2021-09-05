CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -pedantic -std=c++17 -g -fsanitize=address
LDFLAGS =  -fsanitize=address

# SRC = 
# OBJ = main.cpp main.h printMeFirst.h printMeFirst.cpp Time.h Time.cpp
SRC = main.cpp main.h printMeFirst.h printMeFirst.cpp Time.h Time.cpp
OBJ = main.o printMeFirst.o Time.o
EXEC = Calculator

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(LDFLAGS) -o $@ $(OBJ) 

clean: 
	rm -rf $(OBJ) $(EXEC)