

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start,size_t len)
{
	size_t	i;
	size_t	j;
	char	*ptr;


	ptr = (char *)malloc(sizeof(char)*(len + 1));
	if (ptr == 0)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			ptr[j] = s[i];
			j++;
		}
		i++;
	}
	ptr[j] = '\0';
	return (ptr);
}