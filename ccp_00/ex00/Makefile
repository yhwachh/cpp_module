CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp
EXEC = megaphone

all: $(EXEC)

$(EXEC): $(SRC)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean:
	rm -f $(EXEC)