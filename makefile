files = ft_isalpha.c main.c libft.h
gcc = gcc -Wall -Wextra -Werror 

exe : libft.h
	$(gcc)$(files)