CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp
EXEC = megaphone

all: $(EXEC)

$(EXEC): $(SRC)
	$(CXX) $(CXXFLAGS) $^ -o $@

fclean: clean
	rm -f megaphone

clean:
	rm -f $(EXEC)

re: fclean all