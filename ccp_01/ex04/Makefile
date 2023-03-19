CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp
EXEC = remplace

all: $(EXEC)

$(EXEC): $(SRC)
	$(CXX) $(CXXFLAGS) $^ -o $@

fclean: clean
	rm -f remplace *.txt.replace

clean:
	rm -f $(EXEC)

re: fclean all

.PHONY: all clean fclean re