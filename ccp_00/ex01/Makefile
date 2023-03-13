CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: phonebook

phonebook: phonebook.o contact.o
	$(CC) $(CFLAGS) -o phonebook phonebook.o contact.o

phonebook.o: phonebook.cpp phonebook_contact.hpp
	$(CC) $(CFLAGS) -c phonebook.cpp

contact.o: contact.cpp phonebook_contact.hpp
	$(CC) $(CFLAGS) -c contact.cpp

clean:
	rm -f phonebook *.o *~

fclean: clean
	rm -f phonebook

re: fclean all