CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = atoi.c isalpha.c isascii.c isdigit.c \
		isalnum.c isprint.c tolower.c toupper.c \
		putchar_fd.c putendl_fd.c putnbr_fd.c putstr_fd.c \
		bzero.c calloc.c memchr.c memcmp.c \
		memcpy.c memmove.c memset.c \
		itoa.c split.c strchr.c strlen.c \
		strdup.c striteri.c strlcat.c strjoin.c \
		strlcpy.c strmapi.c strncmp.c strnstr.c \
		strrchr.c strtrim.c substr.c
OBJS = $(SRCS:.c=.o)
NAME = libft.a

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
