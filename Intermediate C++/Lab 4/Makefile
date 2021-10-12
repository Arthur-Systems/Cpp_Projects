CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -pedantic -std=c++17 -g -fsanitize=address
LDFLAGS =  -fsanitize=address

SRC = Account.cpp Bank.cpp BankMain.cpp printMeFirst.cpp
OBJ = $(SRC:.cc=.o)
EXEC = BankAccount

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(LDFLAGS) -o $@ $(OBJ) $(LBLIBS)

run: 
	./$(EXEC)

clean:
	rm -rf $(EXEC)