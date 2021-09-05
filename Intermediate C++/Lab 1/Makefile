CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -pedantic -std=c++17 -g -fsanitize=address
LDFLAGS =  -fsanitize=address

SRC = main.cpp printMeFirst.cpp Time.cpp FtC.cpp CtF.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = Calculator

all: $(EXEC)
$(EXEC): $(OBJ)
	$(CXX) $(LDFLAGS) -o $@ $(OBJ) $(LBLIBS)

clean:
	echo "Cleaning up"
	rm -rf $(OBJ) $(EXEC)
run:
	echo "Code created by Haichuan Wei. Enjoy :3"
	./$(EXEC)