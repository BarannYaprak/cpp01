NAME = harl
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
CXX = c++
SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)

all:$(NAME)

$(NAME):$(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

$(OBJ):$(SRC)
	$(CXX) $(CXXFLAGS) -c $(SRC)

clean:
	rm -rf $(OBJ)

fclean:clean
	rm -rf $(NAME)

re: fclean all