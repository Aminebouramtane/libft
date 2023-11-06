

#include "libft.h"


char    *ft_strtrim(char const *s1, char const *set)
{
    size_t  i;
    size_t  j;
    char    *ptr = NULL;

    if (s1 != 0 && set != 0)
    {
        i = 0;
        j = ft_strlen(s1);

        while (s1[i] && ft_strchr(set,s1[i]))
        {
            i++;
        }
        while (s1[j - 1] && ft_strchr(set,s1[j - 1]) && j > i)
        {
            j--;
        }
        ptr = (char *)malloc(sizeof(char) * (j - i + 1));
        if (ptr == NULL)
        {
            return (NULL);
        }
        if (ptr)
        {
            ft_strlcpy(ptr,&s1[i],j - i + 1);
        }
    }
    return (ptr);   
}
