

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*ptr1;
	char	*ptr2;

	i = 0;
	ptr1 = (char *)s1;
	ptr2 = (char *)s2;
	while (ptr1[i] && ptr1[i] == ptr2[i] && i < n)
		i++;
	return ((unsigned char)ptr1[i] - (unsigned char)ptr2[i]);
}