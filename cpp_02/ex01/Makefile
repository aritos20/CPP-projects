# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agianico <agianico@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/26 17:32:01 by agianico          #+#    #+#              #
#    Updated: 2022/07/26 17:32:21 by agianico         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = Fixed
SRCS    = main.cpp Fixed.cpp

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
