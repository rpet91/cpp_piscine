# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rpet <marvin@codam.nl>                       +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/27 14:06:48 by rpet          #+#    #+#                  #
#    Updated: 2020/11/28 13:24:03 by rpet          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
SRCS = contact.class.cpp phonebook.cpp 
OBJS = $(SRCS:.cpp=.o)
FLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic
CC = clang++

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp
	$(CC) $(FLAGS) $(INCLUDES) -c $? -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
