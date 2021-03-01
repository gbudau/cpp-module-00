NAME = phonebook
CPPFLAGS = -Wall -Werror -Wextra
CXX = clang++
DEPS = contact_class.hpp phonebook_class.hpp

OBJ = main.o phonebook_class.o contact_class.o

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

.PHONY: test
test: all
