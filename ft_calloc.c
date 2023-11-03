
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	int	mult;

	if (count == 0 && size == 0)
	{
		count = 1;
		size = 1;
	}
	mult = count * size;
	ptr = malloc(mult);
	if (ptr == NULL)
		return (NULL);
	else
		ft_bzero(ptr,mult);
	return (ptr);
}