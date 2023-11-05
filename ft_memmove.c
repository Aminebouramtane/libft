

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    char    *d = (char *)dst;
    const char    *s = (const char *)src;

	if (d > s)
	{
		while (len > 0)
		{
			d[len] = s[len];
			len--;
		}
	}
	else
		ft_memcpy(d,s,len);
	return (dst);
}