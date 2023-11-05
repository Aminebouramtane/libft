

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	while (s[i])
	{
		if (s[i] == c)
			return ((char*)(s + i));
		i++;
	}
	return (NULL);
}