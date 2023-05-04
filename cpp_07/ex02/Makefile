CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp 
EXEC = array

all: $(EXEC)

$(EXEC): $(SRC)
	$(CXX) $(CXXFLAGS) $^ -o $@

fclean: clean
	rm -f array

clean:
	rm -f $(EXEC)

re: fclean all

.PHONY: all clean fclean re