NAME	=	Interface

SRCS	=	AMateria.cpp \
			Character.cpp \
			Cure.cpp \
			Ice.cpp \
			MateriaSource.cpp \
			main.cpp

OBJS	=	${SRCS:.cpp=.o}

INC		=	AMateria.hpp \
			Character.hpp \
			Cure.hpp \
			Ice.hpp \
			ICharacter.hpp \
			IMateriaSource.hpp \
			MateriaSource.hpp

GPP		=	clang++
RM		=	rm -rf
CFLAGS	=	-Wall -Wextra -Werror
STDFLAG	=	-std=c++98

.PHONY: all clean fclean re

all: ${NAME}

${NAME}: ${OBJS} ${INC}
	${GPP} ${CFLAGS} ${STDFLAG} -o ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all