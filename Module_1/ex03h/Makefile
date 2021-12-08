# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rkieboom <rkieboom@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/10/03 13:57:42 by rkieboom      #+#    #+#                  #
#    Updated: 2021/10/03 15:13:51 by rkieboom      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = fight

FLAGS = -Wall -Werror -Wextra

SRCS = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

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