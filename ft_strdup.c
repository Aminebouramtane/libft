

#include "libft.h"

char    *ft_strdup(const char *s1)
{
	int		i;
	int		j;
	char	*tab;

	i = ft_strlen(s1);
	tab = (char *) malloc(sizeof(char) * (i + 1));
	j = 0;
	while (j < i)
	{
		tab[j] = s1[j];
		j++;
	}
	tab[j] = '\0';
	return (tab);
}