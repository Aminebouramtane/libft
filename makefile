files = ft_isalpha.c main.c libft.h ft_isdigit.c ft_isalnum.c \
		ft_isascii.c ft_isprint.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
		ft_toupper.c ft_tolower.c ft_strncmp.c ft_strnstr.c ft_atoi.c \
		ft_memset.c ft_bzero.c ft_memcpy.c ft_memchr.c ft_memcmp.c ft_calloc.c \
		ft_strdup.c ft_substr.c ft_strjoin.c
gcc = gcc -Wall -Wextra -Werror 

all : exe
	./a.out
exe : libft.h
	$(gcc)$(files)