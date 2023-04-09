CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp WrongCat.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp Brain.cpp
EXEC = animals

all: $(EXEC)

$(EXEC): $(SRC)
	$(CXX) $(CXXFLAGS) $^ -o $@

fclean: clean
	rm -f animals

clean:
	rm -f $(EXEC)

re: fclean all

.PHONY: all clean fclean re