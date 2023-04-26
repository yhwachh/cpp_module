CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =  main.cpp \
        Bureaucrat.cpp \
		Form.cpp
EXEC = Form

all: $(EXEC)

$(EXEC): $(SRC)
	$(CXX) $(CXXFLAGS) $^ -o $@

fclean: clean
	rm -f Form

clean:
	rm -f $(EXEC)

re: fclean all

.PHONY: all clean fclean re