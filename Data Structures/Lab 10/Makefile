CXX = g++
CXXFLAGS = -std=c++17

SRC = HWa10.cpp
OBJ = $(SRC:.cc=.o)
EXEC = Workforce

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(LDFLAGS) -o $@ $(OBJ) $(LBLIBS)

clean:
	rm -rf $(EXEC)