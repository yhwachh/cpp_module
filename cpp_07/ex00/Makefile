CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp
EXEC = whatever

all: $(EXEC)

$(EXEC): $(SRC)
	$(CXX) $(CXXFLAGS) $^ -o $@

fclean: clean
	rm -f whatever

clean:
	rm -f $(EXEC)

re: fclean all

.PHONY: all clean fclean re