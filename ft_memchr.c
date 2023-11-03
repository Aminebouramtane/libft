

#include "libft.h"

void    *memchr(const void *s, int c, size_t n)
{
	int	i;
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