NAME	=	WrongAnimal

SRCS	=	Animal.cpp \
			Cat.cpp \
			Dog.cpp \
			WrongAnimal.cpp \
			WrongCat.cpp \
			main.cpp

OBJS	=	${SRCS:.cpp=.o}

INC		=	Animal.hpp \
			Cat.hpp \
			Dog.hpp \
			WrongAnimal.hpp \
			WrongCat.hpp

CFLAGS	=	-Wall -Wextra -Werror
STDFLAG	=	-std=c++98

RM		=	rm -rf
GPP		=	clang++

.PHONY: all clean fclean re

all: ${NAME}

${NAME}: ${OBJS} ${INC}
	${GPP} ${CFLAGS} ${STDFLAG} -o ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all