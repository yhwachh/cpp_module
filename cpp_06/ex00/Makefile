CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Conversion.cpp
EXEC = Conversion

all: $(EXEC)

$(EXEC): $(SRC)
	$(CXX) $(CXXFLAGS) $^ -o $@

fclean: clean
	rm -f Conversion

clean:
	rm -f $(EXEC)

re: fclean all

.PHONY: all clean fclean re