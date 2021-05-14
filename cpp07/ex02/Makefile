# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:      :+:    :+:    #
#                                                      +:+                     #
#    By: rpet <marvin@codam.nl>                       +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/30 13:04:14 by rpet          #+#    #+#                  #
#    Updated: 2021/05/14 08:51:34 by rpet          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = array
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)
FLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic
CC = clang++
INC = Array.hpp

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
