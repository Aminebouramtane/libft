files = ft_isalpha.c main.c libft.h ft_isdigit.c ft_isalnum.c
gcc = gcc -Wall -Wextra -Werror 

exe : libft.h
	$(gcc)$(files)