CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp \
        Bureaucrat.cpp
EXEC = Bureaucrat

all: $(EXEC)

$(EXEC): $(SRC)
	$(CXX) $(CXXFLAGS) $^ -o $@

fclean: clean
	rm -f Bureaucrat

clean:
	rm -f $(EXEC)

re: fclean all

.PHONY: all clean fclean re