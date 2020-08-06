# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rpet <marvin@codam.nl>                       +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/27 14:06:48 by rpet          #+#    #+#                  #
#    Updated: 2020/08/06 09:29:42 by rpet          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = Attack

SRCS = Weapon.cpp HumanA.cpp HumanB.cpp main.cpp

FLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic

CC = clang++

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(FLAGS) -I. $(SRCS) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
