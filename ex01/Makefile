NAME = phonebook
CPPFLAGS = -Wall -Werror -Wextra
CXX = clang++
DEPS = ClassContact.hpp ClassPhonebook.hpp

OBJ = main.o ClassContact.o ClassPhonebook.o

%.o: %.c $(DEPS)
	$(CXX) $(CPPFLAGS) -c -o $@ $<

.PHONY: all
all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

.PHONY: clean
clean:
	rm -f $(OBJ)

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re: fclean all
