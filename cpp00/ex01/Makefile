# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rpet <marvin@codam.nl>                       +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/27 14:06:48 by rpet          #+#    #+#                  #
#    Updated: 2020/07/28 14:28:47 by rpet          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRCS = phonebook.cpp contact.class.cpp 

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
