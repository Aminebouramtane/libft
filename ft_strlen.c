

#include "libft.h"

size_t ft_strlen(char *c)
{
	size_t i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}