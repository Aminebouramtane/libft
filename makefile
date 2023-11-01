files = ft_isalpha.c main.c libft.h ft_isdigit.c
gcc = gcc -Wall -Wextra -Werror 

exe : libft.h
	$(gcc)$(files)