

#include "libft.h"

char *ft_itoa(int n)
{
    long    _int;
    int len;
    char    *ptr;

    _int = n;
    if (n <= 0)
        len = 2;
    else
        len = 1;
    
    while (_int)
    {
        len ++;
        _int = _int / 10;
    }
    ptr = (char *)malloc(sizeof(char) * len);
    if (ptr == NULL)
        return (NULL);
    ptr[len - 1] = '\0';
    if (_int <= 0)
    {
        if (_int < 0)
            ptr[0] = '-';
        else
            ptr[0] = '0';
    }
    while (_int)
    {
        ptr[len] = (_int % 10) + '0';
        len--;
        _int /= 10;
    }
    return (ptr);
}