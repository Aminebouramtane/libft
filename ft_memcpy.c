

#include "libft.h"

void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    int i;
    char    *d;
    char    *s;

    d = (char *)dst;
    s = (char *)src;

    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dst);
}