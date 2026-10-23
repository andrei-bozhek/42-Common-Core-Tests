#include "../libft.h"
#include <stdio.h>

int main(void)
{
	printf("A: %d (expected 1)\n", ft_isalnum('A'));
	printf("9: %d (expected 1)\n", ft_isalnum('9'));
	printf("space: %d (expected 0)\n", ft_isalnum(' '));
	printf("!: %d (expected 0)\n", ft_isalnum('!'));
	return (0);
}
