SRCS = 	megaphone.cpp \


OBJS = $(SRCS:.c=.o)

CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

NAME = megaphone

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME):	$(OBJS)
		${CC} ${CFLAGS} $(OBJS) -o $(NAME)

all:		$(NAME)

clean:
		rm -f $(OBJS)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
