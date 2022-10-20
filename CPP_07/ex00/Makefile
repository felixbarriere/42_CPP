NAME = Template1
SRCS = 	main.cpp \
		utils.cpp \

OBJS_PATH = objects/
OBJS = ${addprefix ${OBJS_PATH}, ${SRCS:.cpp=.o}}

CC = c++
CFLAGS = -Wall -Werror -Wextra  -std=c++98

${OBJS_PATH}%.o: ${SRCS_PATH}%.cpp
		@mkdir -p $(dir $@)
		${CC} ${CFLAGS} -c $< -o $@ ${INCLUDES}

all:		$(NAME)

$(NAME):	$(OBJS)
		${CC} ${CFLAGS} $(OBJS) -o $(NAME)


clean:
		rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	rm -f -r ${OBJS_PATH}

re: fclean all

.PHONY: all clean fclean re

