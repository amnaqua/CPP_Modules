NAME	=	Real_type

SRCS	=	main.cpp \
			Base.cpp

OBJS	=	${SRCS:.cpp=.o}
INC		=	A.hpp \
			B.hpp \
			C.hpp \
			Base.hpp

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