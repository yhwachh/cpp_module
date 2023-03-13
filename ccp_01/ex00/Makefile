CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Zombie.cpp main.cpp newZombie.cpp randomChump.cpp
EXEC = Zombie

all: $(EXEC)

$(EXEC): $(SRC)
	$(CXX) $(CXXFLAGS) $^ -o $@

fclean: clean
	rm -f Zombie

clean:
	rm -f $(EXEC)

re: fclean all

.PHONY: all clean fclean re