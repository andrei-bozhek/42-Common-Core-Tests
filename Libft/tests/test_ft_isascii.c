#include "../libft.h"
#include <stdio.h>

int main(void)
{
	printf("0: %d (expected 1)\n", ft_isascii(0));
	printf("A: %d (expected 1)\n", ft_isascii('A'));
	printf("127: %d (expected 1)\n", ft_isascii(127));
	printf("128: %d (expected 0)\n", ft_isascii(128));
	return (0);
}
