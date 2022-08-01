# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agianico <agianico@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/01 15:44:48 by agianico          #+#    #+#              #
#    Updated: 2022/08/01 16:14:55 by agianico         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = ScavTrap
SRCS    = main.cpp ClapTrap.cpp ScavTrap.cpp

OBJS    = $(SRCS:.cpp=.o)
CXX        = clang++
CPPFLAGS    = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME):    $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)

re:    fclean all