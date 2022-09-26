NAME	=	megaphone

SRCS	=	./megaphone.cpp
OBJS	=	${SRCS:.cpp=.o}

CPPFLAG	=	-Wall -Wextra -Werror
GPP		=	g++
RM		=	rm -rf

all: ${NAME}

${NAME}: ${OBJS}
	${GPP} ${CPPFLAG} -o ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

test:
	./megaphone "shhhhh... I think the students are asleep..."
	./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
	./megaphone

.PHONY: all clean fclean re test