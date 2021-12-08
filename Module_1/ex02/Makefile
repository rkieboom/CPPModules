# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rkieboom <rkieboom@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/10/03 13:39:57 by rkieboom      #+#    #+#                  #
#    Updated: 2021/12/08 19:55:28 by rkieboom      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = a.out

FLAGS = -Wall -Werror -Wextra

SRCS = main.cpp

O.SRCS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(O.SRCS)
	clang++ $(FLAGS) $(O.SRCS) -o $(NAME)

%.o: %.c
	@clang++ -c $< -o $@

clean:
	@rm -f $(NAME)

re: clean all