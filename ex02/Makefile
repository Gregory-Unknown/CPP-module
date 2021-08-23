NAME		= account

SRCS		= test.cpp Account.cpp

OBJ			= $(SRCS:.cpp=.o)

CC			= clang++

FLAGS		= -g -Wall -Wextra -Werror

RM			= rm -f

$(NAME):	$(OBJ)
			$(CC) $(FLAGS) -o $(NAME) $(OBJ)

all:		$(NAME)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) ${NAME}

re:			fclean all
