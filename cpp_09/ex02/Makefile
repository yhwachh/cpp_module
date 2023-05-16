CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp PmergeMe.cpp
EXEC = PmergeMe

all: $(EXEC)

$(EXEC): $(SRC)
	$(CXX) $(CXXFLAGS) $^ -o $@

fclean: clean
	rm -f $(EXEC)

clean:
	rm -f $(EXEC)

re: fclean all

.PHONY: all clean fclean re