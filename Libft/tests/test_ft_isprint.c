#include "../libft.h"
#include <stdio.h>

int main(void)
{
	printf("31: %d (expected 0)\n", ft_isprint(31));
	printf("space: %d (expected 1)\n", ft_isprint(' '));
	printf("A: %d (expected 1)\n", ft_isprint('A'));
	printf("~: %d (expected 1)\n", ft_isprint('~'));
	printf("127: %d (expected 0)\n", ft_isprint(127));
	return (0);
}
