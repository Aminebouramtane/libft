

#include "libft.h"

char    *strdup(const char *s1)
{
	int		i;
	int		j;
	char	*tab;

	i = 0;
	while (src[i])
	{
		i++;
	}
	tab = (char *) malloc(sizeof(char) * (i + 1));
	j = 0;
	while (j < i)
	{
		tab[j] = src[j];
		j++;
	}
	tab[j] = '\0';
	return (tab);
}