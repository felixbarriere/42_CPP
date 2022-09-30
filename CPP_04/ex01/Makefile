SRCS = 	main.cpp \
		Animal.cpp \
		Dog.cpp \
		Cat.cpp \
		Wrong.cpp \
		Brain.cpp \

OBJS = $(SRCS:.cpp=.o)

CC = g++
CFLAGS = -Wall -Werror -Wextra -std=c++98

NAME = poly2

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	$(OBJS)
		${CC} ${CFLAGS} $(OBJS) -o $(NAME)

all:		$(NAME)

clean:
		rm -f $(OBJS)

fclean:
	rm -f $(NAME) $(OBJS)

re: fclean all

.PHONY: all clean fclean re
