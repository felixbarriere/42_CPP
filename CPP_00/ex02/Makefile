SRCS = 	tests.cpp \
		Account.cpp \

OBJS = $(SRCS:.cpp=.o)

CC = g++
CFLAGS = -Wall -Werror -Wextra -std=c++98

NAME = dream_job

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
