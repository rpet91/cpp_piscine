# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:      :+:    :+:    #
#                                                      +:+                     #
#    By: rpet <marvin@codam.nl>                       +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/30 13:04:14 by rpet          #+#    #+#                  #
#    Updated: 2021/04/27 13:03:27 by rpet          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = a.out
SRCS = main.cpp AWeapon.cpp PlasmaRifle.cpp PowerFist.cpp Enemy.cpp \
	   SuperMutant.cpp RadScorpion.cpp Character.cpp
OBJS = $(SRCS:.cpp=.o)
FLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic
CC = clang++
INC = AWeapon.hpp PlasmaRifle.hpp PowerFist.hpp Enemy.hpp SuperMutant.hpp \
	  RadScorpion.hpp Character.hpp

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp $(INC)
	$(CC) $(FLAGS) -I. -c $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
