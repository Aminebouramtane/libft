

#include "libft.h"

char *ft_itoa(int n)
{
    long    _int;
    int len;
    char    *ptr;

    _int = n;
    len = 0;

    if (_int == 0)
    {
        ptr = (char *)malloc(sizeof(char)*2);
        if (ptr == NULL)
            return (NULL);
        ptr[0] = '0';
        ptr[1] = '\0';
        return (ptr);
    }
    if(_int < 0)
    {
        len++;
        _int *= -1;
    }
    long temp = _int;
    while (temp != 0)
    {
        temp /= 10;
        len ++;
    }
    ptr = (char *)malloc(sizeof(char) * (len + 2));
    if (ptr == NULL)
        return (NULL);
    ptr[len + 1] = '\0';

    if (_int == 0)
        ptr[0] = '0';
    else if (n < 0)
        ptr[0] = '-';

    while (_int != 0)
    {
        ptr[--len] = (_int % 10) + '0';
        _int /= 10;
    }
    return (ptr);
}
