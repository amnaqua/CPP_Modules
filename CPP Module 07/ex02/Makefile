NAME	=	array

SRC		=	main.cpp
OBJ		=	${SRC:.cpp=.o}
INC		=	Array.hpp

CC		=	clang++
RM		=	rm -rf
CFLAGS	=	-Wall -Wextra -Werror
STDFLAG	=	-std=c++98

.PHONY: all clean fclean re

all: ${NAME}

${NAME}: ${OBJ} ${INC}
	${CC} ${CFLAGS} ${STDFLAG} -o ${NAME} ${OBJ}

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re: fclean all
