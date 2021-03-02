NAME = banking
CPPFLAGS = -Wall -Werror -Wextra
CXX = clang++
DEPS = Account.class.hpp

OBJ = tests.o Account.class.o

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
