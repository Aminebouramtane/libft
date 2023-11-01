files = ft_isalpha.c main.c libft.h ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_strlcpy.c
gcc = gcc -Wall -Wextra -Werror 

all : exe
	./a.out
exe : libft.h
	$(gcc)$(files)