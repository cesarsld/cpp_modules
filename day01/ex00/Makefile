OBJ_DIR		=	./

SRC_DIR		=	./

INCLUDE		=	./

SRC			=	Pony.cpp main.cpp

SRCS		=	${addprefix ${SRC_DIR}, ${SRC}}

OBJS		=	${patsubst ${SRC_DIR}%.cpp,${OBJ_DIR}%.o,${SRCS}}

NAME		=	a.out

RM			=	rm -f

CC			=	clang++ -std=c++98 -pedantic-errors

CFLAGS		=	-Wall -Wextra -Werror

T		=	$(words ${OBJS})
N		=	0
C		=	$(words $N)${eval N := X $N}
_CYAN	=	\033[36m
_GREEN	=	\033[32m
ECHO	=	"[`expr $C  '*' 100 / $T`%]"

all:	${NAME}

${OBJ_DIR}%.o :	${SRC_DIR}%.cpp
			@mkdir -p ${OBJ_DIR}
			@${CC} ${CFLAGS} -I ${INCLUDE} -c $< -o $@
			@printf "%-60b\r" "${_CYAN}${ECHO}${_CYAN} Compiling $@"

${NAME}: ${OBJS}
	${CC} ${CFLAGS} -o ${NAME} ${OBJS}

run : all
	./${NAME}

bonus: all

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re: fclean all