CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Zombie.cpp main.cpp zombieHorde.cpp
EXEC = zombieHorde

all: $(EXEC)

$(EXEC): $(SRC)
	$(CXX) $(CXXFLAGS) $^ -o $@

fclean: clean
	rm -f zombieHorde

clean:
	rm -f $(EXEC)

re: fclean all

.PHONY: all clean fclean re