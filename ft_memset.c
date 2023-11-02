

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    char *ptr = b;

    while (len--)
    {
        ptr = c;
        ptr++;
    }
    return b;
}

// 00000100 00000100 00000100 00000100 