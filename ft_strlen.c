

#include "libft.h"

int ft_strlen(const char *c)
{
	int i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}