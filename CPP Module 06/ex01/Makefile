NAME	=	Serialization

SRCS	=	main.cpp 

OBJS	=	${SRCS:.cpp=.o}
INC		=	data.hpp

CFLAGS	=	-Wall -Wextra -Werror
SRDFLAG	=	-std=c++98
CC		=	clang++
RM		=	rm -rf

.PHONY: all clean fclean re

all: ${NAME}

${NAME}: ${OBJS} ${INC}
	${CC} ${CFLAGS} ${SRDFLAG} -o ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all