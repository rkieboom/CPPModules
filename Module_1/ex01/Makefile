# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rkieboom <rkieboom@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/09/23 17:30:12 by rkieboom      #+#    #+#                  #
#    Updated: 2021/10/02 17:36:24 by rkieboom      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = zombie

FLAGS =

SRCS = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

HEADERS = Zombie.hpp

O.SRCS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(O.SRCS)
	clang++ $(FLAGS) $(O.SRCS) -o $(NAME)

%.o: %.c
	@clang++ -c $< -o $@

clean:
	@rm -f $(NAME)

re: clean all