# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rkieboom <rkieboom@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/10/03 16:30:55 by rkieboom      #+#    #+#                  #
#    Updated: 2021/11/06 17:26:40 by rkieboom      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = replace

FLAGS = -Wall -Werror -Wextra

SRCS = main.cpp karen.cpp

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
