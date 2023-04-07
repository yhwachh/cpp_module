CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp ClapTrap.cpp FragTrap.cpp
EXEC = ClapTrap

all: $(EXEC)

$(EXEC): $(SRC)
	$(CXX) $(CXXFLAGS) $^ -o $@

fclean: clean
	rm -f ClapTrap

clean:
	rm -f $(EXEC)

re: fclean all

.PHONY: all clean fclean re