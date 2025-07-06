NAME = whatever

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++17

SRC = main.cpp
HEADERS = whatever.hpp

$(NAME): $(SRC) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
