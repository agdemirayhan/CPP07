NAME = iter_test

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++17

SRC = main.cpp
HDR = iter.hpp

all: $(NAME)

$(NAME): $(SRC) $(HDR)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all

.PHONY: all clean re
