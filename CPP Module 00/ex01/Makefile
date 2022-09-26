NAME	=	phonebook

SRCS	=	Contact.cpp \
			PhoneBook.cpp \
			main.cpp

OBJS	=	${SRCS:.cpp=.o}
INCLUDE	=	PhoneBook.hpp
GPP		=	g++
CFLAGS	=	-Wall -Wextra -Werror
STDFLAG	=	-std=c++98
RM		=	rm -rf

.PHONY: all clean fclean re

all: ${NAME}

${NAME}: ${OBJS} ${INCLUDE}
	${GPP} ${CFLAGS} ${STDFLAG} -o ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all