

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
    char    *ptr;

    i = 0;
    ptr = (char *)s;
	while (i < n)
	{
		if ((unsigned char)ptr[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}