#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <string.h>

int ft_isalpha(int c);
int	ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int	ft_isprint(int c);
size_t ft_strlen(const char *c);
size_t	ft_strlcpy(char *dest, char *src, size_t size);
size_t	ft_strlcat(char * restrict dst, const char *src, size_t dstsize);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);