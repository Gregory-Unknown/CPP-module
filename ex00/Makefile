NAME		= megaphone

SRCS		= megaphone.cpp

OBJ			= $(SRCS:.cpp=.o)

CC			= clang++ -g -Wall -Wextra -Werror

RM			= rm -f

$(NAME):	$(OBJ)
			$(CC) -o $(NAME) $(OBJ)

all:		$(NAME)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) ${NAME}

re:			fclean all
