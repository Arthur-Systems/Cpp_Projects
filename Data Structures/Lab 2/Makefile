CXX = g++
CXXFLAGS = -c -Wall  
LDFLAGS = 

SRC = HWrain.cpp HWa2.cpp
OBJ = $(SRC:.cc=.o)
EXEC = RainFallStats

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(LDFLAGS) -o $@ $(OBJ) $(LBLIBS)

run: 
	./$(EXEC)

clean:
	rm -rf $(EXEC)