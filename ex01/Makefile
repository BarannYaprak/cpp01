NAME = zombie
CPPFLAGS = -Wall -Werror -Wextra -std=c++98
CPP = c++
SRC = $(wilcard *.cpp)
OBJ = $(SRC: .cpp=.o)

all:$(NAME)

$(NAME):$(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

$(OBJ):$(SRC)
	$(CPP) $(CPPFLAGS) -c $(OBJ)

clean:
	rm -rf $(OBJ)

fclean:clean
	rm -rf $(NAME)

re: fclean all
