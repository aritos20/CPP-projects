# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agianico <agianico@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/30 13:04:26 by agianico          #+#    #+#              #
#    Updated: 2022/10/03 15:17:37 by agianico         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = Animal
SRCS    = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp

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