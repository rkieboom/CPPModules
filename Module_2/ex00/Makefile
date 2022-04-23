# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rkieboom <rkieboom@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/10/03 17:33:44 by rkieboom      #+#    #+#                  #
#    Updated: 2022/04/03 15:18:56 by rkieboom      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME =

FLAGS = -Wall -Werror -Wextra

SRCS = main.cpp

O.SRCS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(O.SRCS)
	clang++ $(FLAGS) $(O.SRCS) -o $(NAME)

%.o: %.cpp
	@clang++ -c $< -o $@

clean:
	@rm -f $(NAME)

fclean:
	@rm -f $(NAME)

re: fclean all
