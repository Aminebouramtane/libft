#include "libft.h"

int main(){
	int a = 55;
	char b[] = "amine";
	printf("%d \n", ft_isalpha(a));
	printf("%d \n", ft_isdigit(a));
	printf("%d \n", isdigit(a));
	printf("%d \n", ft_isalnum(a));
	printf("%d \n", isalnum(a));
	printf("%d \n", ft_isascii(a));
	printf("%d \n", isascii(a));
	printf("====================== \n");
	printf("%d \n", ft_isprint(a));
	printf("%d \n", isprint(a));
	printf("====================== \n");
	printf("%zu \n", ft_strlen(b));
	printf("%zu \n", strlen(b));
}
