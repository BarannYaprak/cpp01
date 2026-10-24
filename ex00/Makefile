NAME = zombie
CPP = c++
CPPFLAGS = -WALL -Werror -Wextra -std=98
OBJ = $(SRC:.cpp=.o)
SRC = newZombie.cpp randomChump.cpp Zombie.cpp main.cpp

all:$(NAME)

$(NAME):$(OBJ)
	$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

$(OBJ):$(SRC)
	$(CPP) $(CPPFLAGS) -c $(SRC)

clean:
	rm -rf $(OBJ)

fclean:clean
	rm -rf $(NAME)

re: fclean all

debug:fclean
	$(CPP) $(CFLAGS) -fsanitize=address -g3 -c $(SRC)
	$(CPP) $(CFLAGS) $(OBJ) -fsanitize=address -g -o $(NAME)