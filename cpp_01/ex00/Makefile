NAME    = brainzzz
SRCS    = Zombie.cpp newZombie.cpp randomChump.cpp main.cpp

OBJS    = $(SRCS:.cpp=.o)
CXX        = clang++
CPPFLAGS    = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME):    $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

sanitize: $(NAME)
	$(CXX) $(CPPFLAGS) -fsanitize=address $(OBJS) -o $(NAME)


NOFLAGS:    $(OBJS)
	$(CXX) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)

re:    fclean all