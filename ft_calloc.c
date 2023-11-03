
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	site_t	mult;

	if (count == 0 && size == 0)
	{
		count = 1;
		size = 1;
	}
	mult = count * size;
	b = malloc(mult);
	if (p == NULL)
		return (NULL);
	else
		ft_bzero(p,mult);
	return (p);
}