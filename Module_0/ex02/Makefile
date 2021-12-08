# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rkieboom <rkieboom@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/09/23 15:09:03 by rkieboom      #+#    #+#                  #
#    Updated: 2021/12/08 18:24:42 by rkieboom      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = bank

FLAGS = -Wall -Werror -Wextra -Wunused-variable

SRCS = Account.cpp tests.cpp

HEADERS = Account.hpp

O.SRCS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(O.SRCS)
	clang++  $(FLAGS) $(O.SRCS) -o $(NAME)

%.o: %.c
	@clang++ -c $< -o $@

clean:
	@rm -f $(NAME)

re: clean all