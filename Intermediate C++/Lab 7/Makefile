CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -pedantic -std=c++17 -g -fsanitize=address
LDFLAGS =  -fsanitize=address

SRC = BankAccount.cpp bankTest.cpp CheckingAccount.cpp SavingsAccount.cpp printMeFirst.cpp
OBJ = $(SRC:.cc=.o)
EXEC = Bank

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(LDFLAGS) -o $@ $(OBJ) $(LBLIBS)

run:
	./$(EXEC)

clean:
	rm -rf $(EXEC)

