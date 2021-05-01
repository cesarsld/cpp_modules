SRCS	= main.cpp AWeapon.cpp PlasmaRifle.cpp PowerFist.cpp Enemy.cpp Character.cpp SuperMutant.cpp RadScorpion.cpp EvilRock.cpp MightySpoon.cpp
OBJS	= $(SRCS:.cpp=.o)

NAME	= a.out

CLANG	= clang++ -std=c++98 -pedantic-errors

FLAGS	= -Wall -Wextra -Werror

INCLUDE	= none

HEADER	= AWeapon.hpp PlasmaRifle.hpp PowerFist.hpp Character.hpp Enemy.hpp SuperMutant.hpp RadScorpion.hpp EvilRock.hpp MightySpoon.hpp




all:	$(NAME)

.PHONY:	clean fclean re bonus bench bclean

$(NAME): $(OBJS)
	$(CLANG) $(FLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

%.o: %.cpp $(HEADER)
	$(CLANG) $(FLAGS) -c $<  -o $(<:.cpp=.o)