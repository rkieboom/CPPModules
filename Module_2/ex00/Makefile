# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rkieboom <rkieboom@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/10/03 17:33:44 by rkieboom      #+#    #+#                  #
#    Updated: 2021/10/03 17:34:16 by rkieboom      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = orthodox

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

fclean:
	@rm -f $(NAME)

re: fclean all
