NAME = bsq

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = main.c read.c init.c process.c display.c utils.c

OBJ = $(SRC:.c=.o)  

DEPS = BSQ.h 

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re