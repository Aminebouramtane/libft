

#include "libft.h"

char	*strchr(const char *s, int c)
{
	int	i;
	while (s[i])
	{
		if (s[i] == c)
			return (*s + i);
		i++;
	}
	return (NULL);
}