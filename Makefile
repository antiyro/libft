NAME	= libft.a

GCC		= gcc -Wall -Wextra -Werror

SRC		= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
ft_isascii.c ft_isdigit.c ft_isprint.c ft_memccpy.c ft_strchr.c ft_itoa.c\
ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_split.c\
ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_putstr_fd.c ft_strrchr.c\
ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strtrim.c ft_putnbr_fd.c ft_strmapi.c\
ft_substr.c ft_tolower.c ft_toupper.c ft_putchar_fd.c ft_putendl_fd.c\

OBJ 	= $(SRC:.c=.o)

INC		= -I includes/

$(NAME): $(OBJ)
				ar rc $(NAME) $(OBJ)
				ranlib $(NAME)
%.o: %.c
				$(GCC) $(INC) -o $@ -c $?

all: $(NAME)

clean:
				rm -rf $(OBJ)
fclean: clean
				rm -rf $(NAME)
re: fclean all

.PHONY: clean