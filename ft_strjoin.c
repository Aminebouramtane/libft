

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int	i;
	int	j;
	char	*ptr;
	int	len;

	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		ptr[i + j] = s2[j];
		j++;
	}
	ptr[i + j] = '\0';
	return (ptr);
}