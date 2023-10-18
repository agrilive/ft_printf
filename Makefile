CC = cc

CFLAGS = -Wall -Wextra -Werror

INCLUDES = .

SRCS = $(wildcard *.c)

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -I $(INCLUDES) -c $< -o $@

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all